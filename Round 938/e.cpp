/*
    Author:Matkap(prefix_sum)
*/

#include <bits/stdc++.h>
#include <array>

using namespace std;

#define int long long
#define endl "\n"
#define ar array
#define all(x) x.begin(),x.end()

const int INF = 1e17 , MOD = 1e9 + 7;

void setIO(string name = "") 
{
	if (name.size())
	{
		freopen((name + ".in").c_str(), "r", stdin); // For USACO
		freopen((name + ".out").c_str(), "w", stdout);
	}
}
int binpow(int base,int power)
{
	if(power == 1) return base;
	if(power == 0) return 1;
    
     if(power%2==1)
     {
     	 int a;
     	a = binpow(base,(power-1)/2);
     	return a*a*base;
     } 
     else
     {
     	 int a;
     	a = binpow(base,power/2);
     	return a*a;
     } 

}
int tree[5005];
int n;
void update(int l,int r)
{
	for(int i = l;n >= i;i += (i&-i)) tree[i] += 1;
	for(int i = r+1;n >= i;i += (i&-i)) tree[i] -= 1;
}
int q(int pos)
{
	int res = 0;
	for(int i = pos;i > 0;i -= (i&-i)) res += tree[i];
	return res;
}
void solve()
{
   	cin >> n;
   	string s;
   	cin >> s;
   	for(int i = n;i > 0;i--)
   	{
   		memset(tree,0,sizeof(tree));
   		for(int j = 0;n-i >= j;j++)
   		{
   			if(s[j] == '0' && q(j+1) % 2 == 0)
   			{
   				update(j+1,j+i);
   			}
   			if(s[j] == '1' && q(j+1) % 2 == 1)
   			{
   				update(j+1,j+i);
   			}
   		}
   		bool f = true;
   		for(int j = 0;n > j;j++)
   		{
   			if((q(j+1) % 2 + (s[j] - '0') % 2)%2 == 0)
   			{
   				f = !f;
   				break;
   			}
   		}
   		if(f == true)
   		{
   			cout << i << endl;
   			return;
   		}
   	}
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int tt;
	tt=1; 
	cin >> tt;
	while(tt--) solve();

}