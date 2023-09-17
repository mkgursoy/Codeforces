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
   	int a,b;
   	cin >> a >> b;

   	int p2a = 0,p2b = 0,p5a = 0,p5b = 0,p10b = 0;

   	int k = a;


   	while(a%2 == 0) a/=2,p2a++;

   	while(a%5 == 0) a/=5,p5a++;

	int mj = min(p2a,p5a);

   	p2a -= mj;

   	p5a -= mj;


   	int new_b = 1;
	while(new_b * 5 < b && p2a > p5b) new_b *= 5,p5b++;
   	while(p5a > p2b && new_b * 2 < b) new_b *= 2,p2b++;
   	
   	while(new_b * 10 < b) new_b *= 10;

   


   	cout << (k * new_b) * (b / new_b) << endl;




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




