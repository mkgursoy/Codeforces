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
    if(n==4)
    {
        cout << "that" << endl;
        return;
    }
    set<int> bolen;
    vector<int> b1;
    int h = n;
    

    for(int i=1;n/2>=i;i++)
    {
        if(h%i == 0)
        {
             bolen.insert(i+1);
             if((h/i)!=i)
                 bolen.insert(h/i+1);
        }
       
    }
    int tmp = 1;
    int k=1;
    for(auto it : bolen)
    {
        b1.push_back(it);
    }
    for(int i=1;b1.size()>i;i++)
    {
        if(b1[i]-b1[i-1] != 1) 
        {
            k = i;
            break;
        }
    }
    char ar[n];
    
    int k1=0;
    

   for(int i=0;k>=i;i++)
   {
        char gh = 'a' + k1;
        for(int j = i;n>j;j += k+1) ar[j] = gh;
            k1++;

   }

   for(int i=0;n>i;i++) cout << ar[i];
    cout << endl;
    
    
 
}



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // fr
    

    int t;
    t=1;
    cin >> t;
    for(int i=0;t>i;i++)
    {
        
        solve();
    }

}


//template




