#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("O3,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;
#define fr freopen("in.txt","r",stdin);freopen("outi.txt","w",stdout);
int mxn = 1e9;
int mnn = -mxn;
#define int long long
#define endl "\n"
#define mod  998244353
#define all(x) x.begin(),x.end()

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


void solve()
{
   int n;
   cin >> n;
   int ar[n];
   int pre[n];
  

   for(int i=0;n>i;i++) cin >> ar[i];
   	 if(3>=n)
   {
   	cout << "0" << endl;
   	return;
   }
   
   	sort(ar,ar+n);

   	int l = 0,r = mxn,cvp = 0;
   	while(r>=l)
   	{
   		int mid = (l+r)/2;

   		int cnt = 1;
	int mn = ar[0];
	for(int i=1;n>i;i++)
	{
		
		if((ar[i] - mn + 1)/2 > mid)
		{
			cnt++;
			mn = ar[i];
		}
	}
   		if(cnt <= 3)
   		{
   			r = mid-1;
   			cvp = mid;
   		}
   		else
   			l = mid+1;
   	}
   	cout << cvp << endl;
   	
   	


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




