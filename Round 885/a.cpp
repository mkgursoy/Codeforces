#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("O3,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;
#define fr freopen("in.txt","r",stdin);freopen("outi.txt","w",stdout);
#define mxn 999999999
#define mnn -mxn
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
   int n,m,k;
   cin >> n >> m >> k;
   int x1,y1;
   cin >> x1 >> y1;
   bool f = true;
   for(int i=0;k>i;i++)
   {
    int x,y;
    cin >> x >> y;
    if((abs(x1-x) + abs(y1-y))%2 == 0) f = false;
   }
   if(f) cout << "YES" << endl;
   else
    cout << "NO" << endl;


}



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  //  fr

    int t;
    t=1;
    cin >> t;
    while(t--) solve();

}


//template




