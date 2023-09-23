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
   	int n,k;
   	cin >> n >> k;
   	int ar[n];
   	int h[n];
   	int mark[n];
   	memset(mark,-1,sizeof(mark));
   	int d = 0;
   	for(int i = 0;n>i;i++)
   	{
   		cin >> h[i];
   		
   	}
   	for(int i = 0;n>i;i++)
   	{
   		cin >> ar[i];
   		
   	}
   	

   	for(int i = 0;n-1>i;i++)
   	{

   		if(h[i+1] % h[i] == 0) mark[i] = d,mark[i+1] = d;
   		else
   			d++;

   		

   	}
   	for(auto it : h) cout << it << " ";
   		cout << endl;
   	for(auto it : mark) cout << it << " ";
   	cout << endl;
   	




   	int pref[n];
   	int suf[n];

   	pref[0] = ar[0];

   	suf[n-1] = ar[n-1];

   	for(int i = 1;n>i;i++)
   	{
   		pref[i] = pref[i-1] + ar[i];
   	}

   	for(int i = n-1;i >= 0;i--)
   	{
   		suf[i] = suf[i+1] + ar[i];
   	}

   	int mx = 0;

   	for(int i = 0;n>i;i++)
   	{
   		int l = i;
   		i++;

   		while(n > i && mark[i] == mark[i-1]) i++;



   		i--;
   		cout << l << " " << i << endl;

   		

   		for(int j =l;i >= j;j++)
   		{
   			int x;

   			if(l == 0) x = 0;
   			else
   				x = pref[l-1];

   			int y;

   			if(i == n-1) y = 0;
   			else y = suf[i+1];
   			if(k >= suf[j] - y + pref[j] - x)
   			mx = max(mx,suf[j] - y + pref[j] - x);
   		}
   	}

   	cout << mx << endl;

   	
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




