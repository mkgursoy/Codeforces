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
    
     if(power%2 == 1)
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
   	int a,b,c,k;
   	cin >> a >> b >> c >> k;
   	int h = binpow(10,a);
   	int h1 = binpow(10,b);
   	int h2 = binpow(10,c);
   	for(int i = binpow(10,a-1);h > i;i++)
   	{
   		int l = max(binpow(10,b-1),binpow(10,c-1) - i);
   		int r = min(h1 - 1,h2-i - 1);

   		if(l > r) continue;
   		int j = r-l+1;
   		if(j >= k)
   		{
   			cout << i << " + " << l + k -1 << " = " << l + k + i-1 << endl;
   		return; 
   		}
   		k-=j;

   		
   	}
   	cout << "-1" << endl;	
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




