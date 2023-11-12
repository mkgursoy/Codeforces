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

void solve()
{
   	int n,m,k;
   	cin >> n >> m >> k;
   	int ar[n];
   	int bar[m];

   	for(int i = 0;n > i;i++) cin >> ar[i];
   		for(int i = 0;m > i;i++) cin >> bar[i];

   	if(n == 1)
   	{
   		cout << max(ar[0],bar[0]) << endl;
   		return;
   	}
   	

   	int mx1 = mnn;
   	int mx2 = mnn;
   	int mn1 = mxn;
   	int mn2 = mxn;
   	int sum1 = 0;
   	int sum2 = 0;
   	for(auto it : ar) mx1 = max(mx1,it),mn1 = min(mn1,it),sum1 += it;
   	for(auto it : bar) mx2 = max(mx2,it),mn2 = min(mn2,it),sum2 += it;

   	if(mx1 > mx2)
   	{
   		if(k%2 == 1)
   		{
   			cout << sum1-mn1+mx2 << endl;

   		}	
   		else
   			cout << sum1 - mx1 + mn2 << endl;
   	}
   	else
   	{
   		if(k%2 == 0)
   		{
   			cout << sum1-mn1+mx2 << endl;

   		}	
   		else
   			cout << sum1 - mx1 + mn2 << endl;
   	}

}



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	fr

	int t;
	t=1;
	cin >> t;
	while(t--) solve();

}


//template




