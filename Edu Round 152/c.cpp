#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("O3,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;
#define fr freopen("int.txt","r",stdin);freopen("outi.txt","w",stdout);
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
    int n,m;
    cin >> n >> m;
   string s;
   cin >> s;
   vector<int> gh;
   
   for(int i=1;n>i;i++) if(s[i] != s[i-1]) gh.push_back(i);
   bool f = false;
   map<pair<int,int>,int> mp;
   int cvp = 0;
   while(m--)
   {
    bool sk = true;
        int x,y;
        cin >> x >> y;
        x--;
        y--;
        int x1 = upper_bound(gh.begin(),gh.end(),x)-gh.begin();
        int y1 = upper_bound(gh.begin(),gh.end(),y)-gh.begin();
       // cout << x1 << " " << y1 << endl;
        if(y1-x1 == 0 || (y1- x1 == 1 && s[y] == '1'))
        {

            f = true;
            continue;
        }


        while(s[x-1] == '0' && x >= 0) x--;
        while(s[y+1] == '1' && n>y) y++;


        if(mp[{x,y}] == 0) cvp++;
        mp[{x,y}]++;
   }
cout << cvp + (f == true) << endl;
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




