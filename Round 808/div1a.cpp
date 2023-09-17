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
    int n,q;
    cin >> n >> q;
    
    int ar[n];

    for(int i = 0;n>i;i++) cin >> ar[i];
    int l = 0,r = n-1;


    while(r > l)
    {
      //  cout << l << " " << r << endl;
        int mid = (l+r)/2;

        int i;
        int k = q;
        
        for(i = mid;n>i;i++)
        {
            if(k == 0) break;
            if(ar[i] > k)
            {
                k--;
            }
        }
        
        if(i == n)
        {
            r = mid;
        }
        else
            l = mid+1;
    }
   //cout << r << endl;
    int i;
    for(i = 0;r>i;i++)
    {
        if(ar[i] <= q)
        {
            cout << "1";

        }
        else
            cout << "0";
    }
    for( ;n>i;i++)
    {
        if(q == 0)
        {
            cout << "0";
            continue;
        }
        cout << "1";
        if(ar[i] > q)
        {
            q--;
        }
    }

    cout << endl;


    
    
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




