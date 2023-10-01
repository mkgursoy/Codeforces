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
const int mod = 998244353;
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
int fact[200008];
void solve()
{
   	string s;
   	cin >> s;
   	int n = s.length();


   	int cvp = 0;
   	int cvp1 = 1;
   	vector<int> ayr;
   	int adj = 1;
   	for(int i = 1;n > i;i++)
   	{
   		if(s[i] != s[i-1])
   		{
   			cvp+=adj-1;
   			
   			ayr.push_back(adj);
   			adj = 0;

   		}
   		adj++;
   	}
   	
   	cvp+=adj-1;

   	
   	ayr.push_back(adj);

   	for(auto it : ayr)
   	{
   		cvp1 *= it;
   		cvp1%=mod;
   		
   	}
   	cvp1%=mod;
   	cvp1 *= fact[cvp];
   	cvp1%=mod;
   	
   	
   	cout << cvp << " " << cvp1 << endl;
}



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fact[0] = 1;

    for(int i = 1;200007 >= i;i++) fact[i] = (fact[i-1]%mod * i%mod)%mod;

	//fr

	int t;
	t=1;
	cin >> t;
	while(t--) solve();

}


//template




