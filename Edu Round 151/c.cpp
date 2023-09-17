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
   	string s;
   	cin >> s;
   	int n = s.size();
  	int m;
  	cin >> m;
  	string l,r;
  	cin >> l >> r;
  	int num[10];

  	memset(num,-1,sizeof(num));

  	for(int i = 0;n>i;i++) 
  	{
  		num[s[i]- '0'] = i;
  	}


  	string tmp = "";
  	int bas = 0;
  	for(int i = 0;m>i;i++)
  	{
  		int k = 0;
  		for(int j = l[i]-'0';r[i]-'0' >= j;j++)
  		{
  			int cur = bas;

  			while(n > cur && s[cur] - '0' != j) cur++;

  			k = max(cur,k);


  		}
  		bas = k + 1;
  	}


  	if(bas > n) cout << "YES" << endl;
  	else
  		cout << "NO" << endl;
  	



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




