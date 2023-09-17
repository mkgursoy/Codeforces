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
   int n;
   cin >> n;
   int ar[n];
   map<int,int> mp;
   for(int i=0;n-1>i;i++)
   {
        cin >> ar[i];

   }

int x =mxn,y = mnn,z = 0;
   for(int i=0;n-1>i;i++)
   {
        int x2 = ar[i-1];
        int y2 = ar[i];
        if(i == 0) x2= 0;

        if((mp[abs(x2-y2)] == 1 || abs(x2-y2) > n)) x = min(x,abs(x2-y2)),y = max(y,abs(x2-y2)),z++;
        if(z > 2)
        {

            cout << "NO" << endl;
            return;
        }

        mp[abs(x2-y2)] = 1;
   }
   if(z == 0)
   {
    cout << "YES" << endl;
    return;
   }



   int x1 = 0;
   int y1 = 0;
   int z1 = 0;
   for(int i=1;n>=i;i++)
   {
    if(mp[i] == 0)
    {
        if(x1 == 0) x1= i;
        else if(y1 == 0) y1 = i;
        else
            z1 = i;
    }
   }

   int a = x1;
   int b = y1;
   int c = z1;
   int an = b + c;
   int bn = a + c;
   int cn = a + b;
  // cout << a << " " << b << " " << c << endl;
     if(z == 1 && (y == a || y == b || y == c || y == an || y == bn || y == cn || y == a + b + c))
     {
        cout << "YES" << endl;
        return;
     }
   if((x == a && (y == an || y == b || y == c)) || (x == b && (y == bn || y == a || y == c)) || (x == c && (y == cn || y == a || y == b)) || (y == a && (x == an || x == b || x == c)) || (y == b && (y == bn || y == a || y == c)) || (y == c && (x == cn || x== a || x == b)))
    cout << "YES" << endl;
else
    cout << "NO" << endl;



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




