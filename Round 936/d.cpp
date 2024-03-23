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
void solve()
{
   	int n,k;
   	cin >> n >> k;
   	k++; //Less than k + 1
   	vector<int> a(n);
   	int ans = -1;
   	for(int i = 0;n > i;i++)
   	{
   		cin >> a[i];
   	}
   	for(int bit = 30;bit >= 0;bit--)
   	{
   		bool op = false;
   		vector<int> new_a;
   		for(auto it : a)
   		{
   			if(!op)
   				new_a.push_back(it);
   			else
   				new_a.back() ^= it;
   			if(it & (1 << bit)) op = !op;
   		}
   		if(k & (1 << bit))
   		{
   			if(!op) //Last r i is N
   			{
   				ans = max(ans , (int)new_a.size());
   			}
   		}
   		else
   		{
   			if(op)
   			{
   				cout << ans << endl;
   				return;
   			}
   			a = new_a;
   		}
   	}
   	cout << ans << endl;
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