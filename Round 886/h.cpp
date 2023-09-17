/*
    Author:Matkap(prefixsumenjoyer23)
    
*/
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("O3,fast-math,inline")
#include <bits/stdc++.h>
#include<array>

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
    
     if(power&2)
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
int val[200005];
void dfs(int pos,vector<pair<int,int>>* adj)
{
	for(auto it : adj[pos])
	{
		if(visited[it.first] == 0) 
		{
			visited[it.first] = 1;
			val[it.first] = val[pos] + it.second;
			dfs(it.first,adj);
			
		}
	}

	

}
void solve()
{
   	int n,m;
   	cin >> n >> m;
   	vector<pair<int,int>> adj[n+1];
   	int ar1[m];
   	int ar2[m];
   	int ar3[m];
   	memset(visited,0,sizeof(visited));
   	memset(val,0,sizeof(val));
   	for(int i = 0;m>i;i++)
   	{
   		int x,y,z;
   		cin >> x >> y >> z;

   		adj[x].push_back({y,z});
   		adj[y].push_back({x,-z});

   		ar1[i] = x;
   		ar2[i] = y;
   		ar3[i] = z;



   	}

   	
   

   	for(int i = 1;n>=i;i++)
   	{
   		dfs(i,adj);
   	}


   	for(int i = 0;m>i;i++)
   	{
   		if(val[ar1[i]] + ar3[i] != val[ar2[i]])
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

	//fr

	int t;
	t=1;
	cin >> t;
	while(t--) solve();

}


//template




