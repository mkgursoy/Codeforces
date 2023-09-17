/*
    Author:Matkap(prefixsumenjoyer23)
    
*/
#pragma GCC optimize("O3")
#pragma GCC target("avx2")
#pragma GCC warning "deprecated"
#pragma GCC ivdep
#pragma GCC optimize("trapv")
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
   	int n,k,a,b;
   	cin >> n >> k >> a >> b;


   	if(n/k <= b)
   	{
   		n %= k;
   	}
   	else
   		n-=k*b;


   	if(a >= n)
   	{
   		cout << "0" << endl;
   		return;
   	} 

   	n-=a;

   	int cvp = 0;

   	cvp += n/k;
   	n %= k;

   	if(k-n%k <= a && n!= 0) cout << cvp+1 << endl;
   	else
   	cout << n + cvp << endl;
   
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




