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
int pos1[200005];
void dfs(int pos,vector<int>* adj,int parent)
{
	//cout << "pos: " << pos << endl;
	int h = 0;
	

	for(auto it : adj[pos])
	{
		
			if(it == parent) continue;
			h++;
			dfs(it,adj,pos);
			pos1[pos] += pos1[it];
			
	

	}
	if(h == 0) pos1[pos] = 1;
	return;
	

}
void solve()
{
   	int n;
   	cin >> n;
   	vector<int> adj[n];
   	memset(pos1,0,sizeof(pos1));
   	for(int i = 0;n-1>i;i++)
   	{

   		int x,y;
   		cin >> x >> y;
   		adj[x-1].push_back(y-1);
   		adj[y-1].push_back(x-1);
   	}
   	dfs(0,adj,-1);
   	int q;
   	cin >> q;
   	while(q--)
   	{
   		int a,b;
   		cin >> a >> b;
   		a--;
   		b--;
   		cout << pos1[a]* pos1[b] << endl;;
   	}


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




