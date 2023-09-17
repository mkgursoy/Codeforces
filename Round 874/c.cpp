/*
    Author:Matkap(prefixsumenjoyer23)
    
*/
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("O3,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;
#define fr freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);


#define int long long
#define endl "\n"
#define mod  998244353
#define all(x) x.begin(),x.end()

int mxn = 1e18;
int mnn = -mxn;

void outarr(int ans[],int n)
{
	for (int i = 0; i < n; i++) cout << ans[i] << " \n"[i == n - 1];
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
int gcd(int a, int b)
{

    if(b == 0) {
            return a;
    }
    else {
        return gcd(b, a % b);
    }
}
int lcm(int a,int b)
{
	return (a*b)/gcd(a,b);
}
int visited[200005];
int index1[200005];
void dfs(int pos,vector<pair<int,int>>* adj)
{
	for(auto it : adj[pos])
	{
		if(visited[it.first] == 0) 
		{
			visited[it.first] = visited[pos];
			if(it.second <= index1[pos]) visited[it.first]++;

			index1[it.first] = it.second;
			dfs(it.first,adj);
			
		}
	}

}

void solve()
{
   	int n;
   	cin >> n;
   	vector<pair<int,int>> adj[n];
   	for(int i = 0;n-1>i;i++)
	{
		int x,y;
		cin >> x >> y;
		adj[x-1].push_back({y-1,i});
		adj[y-1].push_back({x-1,i});
	}
	

	memset(visited,0,sizeof(visited));
	memset(index1,-1,sizeof(index1));
	visited[0] = 1;
	
	dfs(0,adj);

	cout << *max_element(visited,visited+n) << endl;

}



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	//fr

	int t;
	t=1;
	cin >> t;
	while(t--) solve();

}


//template




