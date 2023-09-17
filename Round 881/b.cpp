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
int func(int n)
{
  if(n == 0) return 0;
  if(n%2 == 0) return 0;
  if(n == 1) return 1;

  return func(n/2);

}


void solve()
{
  int n;
  cin >> n;
  int ar[n];
  int sum = 0;
  int ans = 0;
  int tmp = -1;
  for(int i=0;n>i;i++)
  {
    cin >> ar[i];

    if(i)
    {
      if(ar[i] < 0 && ar[tmp] > 0) sum++,tmp = i;
    }
    if(ar[i] < 0 && tmp == -1) sum++,tmp = i;
    if(ar[i] > 0) tmp = i;

    ans += abs(ar[i]);
  }
  cout << ans << " " << sum << endl;


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




