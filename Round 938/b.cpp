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
   	int n,c,d;
   	cin >> n >> c >> d;
   	int mn = INF;
   	map<int,int> mp;
   	for(int i = 0;n * n > i;i++)
   	{
   		int x;
   		cin >> x;
   		mp[x]++;
   		mn = min(mn,x);
   	}
   	for(int i = 0;n > i;i++)
   	{
   		for(int j = 0;n > j;j++)
   		{
   			mp[mn + i * c + j * d]--;
   		}
   	}
   	for(auto it : mp)
   	{
   		if(it.second != 0)
   		{
   			cout << "NO" << endl;
   			return;
   		}
   	}
   	cout << "YES" << endl;
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