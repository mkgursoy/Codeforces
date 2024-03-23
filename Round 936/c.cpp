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
const int mxN = 1e5 + 7;
vector<int> adj[mxN];
int ans = 0;
int dfs(int pos,int par,int rm)
{
	int sz = 1;
	for(auto it : adj[pos])
	{
		if(it != par)
		{
			sz += dfs(it,pos,rm);		
		}
	}
	if(sz >= rm)
	{
		sz = 0;
		ans++;
	}
	return sz;
}
void solve()
{
   	int n,k;
   	cin >> n >> k;
   	for(int i = 0;n > i;i++) adj[i].clear();
   	for(int i = 0;n-1 > i;i++)
   	{
   		int x,y;
   		cin >> x >> y;
   		x--,y--;
   		adj[x].push_back(y);
   		adj[y].push_back(x);
   	}
   	int l = 1;
   	int r = n;
   	while(r > l)
   	{
   		int mid = (l + r + 1) / 2;
   		ans = 0;
   		int sz1 = dfs(0,-1,mid);
   		ans--;
   		//cout << ans << " " << mid << endl;
   		if(ans < k) r = mid-1;
   		else l = mid ;
   	}
   	cout << l << endl;
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