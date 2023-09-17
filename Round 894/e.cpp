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

void solve()
{
   	int n,m,d;
   	cin >> n >> m >> d;
   	int ar[n];
   	for(int i = 0;n>i;i++) cin >> ar[i];

   pair<int,int> dp[n+1][m+1];

memset(dp,0,sizeof(dp));
int mx = 0;
   for(int i = 1;n>=i;i++)
   {
   	for(int j = 1;m>=j;j++)
   	{

   		if(dp[i-1][j].first > dp[i-1][j-1].first + ar[i-1] - d*(i-dp[i-1][j-1].second))
   		{
   			dp[i][j] = dp[i-1][j];
   		}
   		else
   		{
   			dp[i][j].first = dp[i-1][j-1].first + ar[i-1] - d*(i-dp[i-1][j-1].second);
   			dp[i][j].second = i;

   			//cout << "TAKE: " << i << " " << j << " " << dp[i][j].first << endl;
   		}

   		  	mx = max(mx,dp[i][j].first);

   	}
 
   }

   cout << mx << endl;

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




