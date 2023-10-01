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
struct fenwicktree
{
private:int fft[12][100005];
public:
	void init(int* ar,int n)
	{
		for(int i = 0;12>i;i++)
		memset(fft[i],0,sizeof(fft[i]));

		int pre[n+1];
		pre[1] = ar[0];
		for(int i=2;n>=i;i++) pre[i] = ar[i-1] + pre[i-1];

		for(int j = 0;12 > j;j++)
		{
			for(int i=1;n>=i;i++) fft[j][i] = pre[i]-fft[j][i-(i&-i)];
			
		}
		


	}
	int query(int l,int r,int k)
	{
		int sumtotal = 0;
		int sumleft = 0;
		int i;
		for(i = r+1;i>0;i-=i&-i) sumtotal += fft[k][i];
				for(i = l;i>0;i-=i&-i) sumleft += fft[k][i];
		return sumtotal-sumleft;
		
			

		return sumtotal;
	}
	
	void add(int value,int place,int n,int k)
	{
		for(int i=place+1;n>=i;i+=i&-i)
		{
			fft[k][i] += value;
		}
	}

};
void solve()
{
   	int n,k;
   	cin >> n >> k;
   	k++;

   	int ar[n];
   	int bos[n];
   	int localft[k][n];
   	memset(localft,0,sizeof(localft));
   	fenwicktree ft;

   	for(int i = 0;n>i;i++) cin >> ar[i],bos[i] = 0;

   	ft.init(bos,n);

   	for(int i = 0;n>i;i++)
   	{
   		ft.add(1,ar[i]-1,n,0);
   		localft[0][ar[i]-1] += 1;


   		if(ar[i] != 1)
   		for(int q = 1;k>q;q++)
   		{
   			

   			ft.add(ft.query(0,ar[i]-2,q-1),ar[i]-1,n,q);
   			localft[q][ar[i]-1] += ft.query(0,ar[i]-2,q-1);


   		}
   		

   		
   		
   		

   	}


   	cout << ft.query(0,n-1,k-1) << endl;

}



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	//fr

	int t;
	t=1;
	//cin >> t;
	while(t--) solve();

}


//template




