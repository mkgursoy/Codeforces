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
   	int n,m;
   	cin >> n >> m;

   	int ar[n];
   	int ot[m];
   	int l = 0,r = 0;
   	int cvp1 = 0;
   	int cvp = 0;
   	int le = n,re = 0;
   	memset(ot,0,sizeof(ot));
   	for(int i = 0;n>i;i++) cin >> ar[i];
   	sort(ar,ar+n);	
   	for(int i = 0;n>i;i++) 
   	{
   		//cout << ar[i] << endl;
   		if(ar[i] > 0 && ot[ar[i]-1] == 0)
   		{
   			//cout << ar[i] << " " << ot[ar[i]-1] << endl;
   			ot[ar[i]-1] = 1;


   			cvp1++;
   			
   		}
   		if(ar[i] == -1) l++;
   		if(ar[i] == -2)
   			r++;
   	}
   	if(l != 0) ot[0] = 1;
   	if(r != 0) ot[m-1] = 1;
   	
   	int nowl = 0,nowr = cvp1;
   //	cout << l << " " << r << endl;
   	for(int i = 0;m>i;i++)
   	{
   		if(ot[i] != 1) continue;
   		//cout << i << ": " << nowl << " " << nowr << " " << cvp << endl;

   		cvp = max(cvp,min(l,i-nowl) + min(n-i-1-nowr,r));
   		
   		 nowl++,nowr--;

   	}


   	cout << cvp + cvp1 << endl;

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




