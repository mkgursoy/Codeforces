#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("O3,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;
#define fr freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
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
   int n;
   cin >> n;
   int ar[n];
  

   int mx = 0;
   int mn = 0;
   int cnt = 0;
   int ind = 0;
   for(int i=0;n>i;i++)
   {
        cin >> ar[i];
        if(ar[i] < 0) cnt++;
        if(ar[i] >= mx)
        {
            mx = ar[i];
            ind = i;
        }
        mn = min(mn,ar[i]);



        


   }
   if(mx == 0) 
   {
    cout << n-1 << endl;
        for(int i=n-1;i>0;i--)
        {
            cout << i << " " << i+1 << endl;
        }
        return;
   }
   if(mn == 0)
   {
        cout << n-1 << endl;
        for(int i=0;n-1>i;i++)
        {
            cout << i+2 << " " << i+1 << endl;
        }
        return;
   }

int say = 0;
   while(20 > mx) mx *= 2,say++;


   cout << cnt + n -1 + say << endl;
   for(int i=0;say >i;i++)
   {
    cout << ind+1 << " " << ind+1 << endl;
   }

   for(int i=0;n>i;i++)
   {
        if(ar[i] < 0) ar[i] += mx,cout << i+1 << " " << ind+1 << endl;

   }

    for(int i=0;n-1>i;i++)
        {
            cout << i+2 << " " << i+2-1 << endl;
        }









   
   

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

 // fr

    int t;
    t=1;
    cin >> t;
    while(t--) solve();

}


//template




