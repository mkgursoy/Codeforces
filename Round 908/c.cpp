/*
    Author:Matkap(prefixsumenjoyer23)
    
*/
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
#include <array>

using namespace std;

#define fr freopen("/Users/metinkasim/Documents/in.txt","r",stdin);freopen("/Users/metinkasim/Documents/out.txt","w",stdout);
#define int long long
#define endl "\n"
#define ar array
#define all(x) x.begin(),x.end()

int mxn = 1e18;
int mnn = -mxn;

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
 	int a[n];
 	bool f = false;
  	for(int i = 0;n > i;i++)
   	{
   		cin >> a[i];
   		
   	} 
   	int vis[n];
   	memset(vis,-1,sizeof(vis));
   	int cur = n-1;
   	for(int i = 0;k > i;i++)
   	{
   		if(a[cur] > n)
   		{
   			cout << "No" << endl; //Can't Use
   			return;
   		}  
   		if(vis[cur] == 1) break;
   		
		vis[cur] = 1;	
   		cur = (cur - a[cur] + n)%n;
   		
   	}

   	cout << "Yes" << endl;


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
