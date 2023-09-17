#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("O3,fast-math,inline")
#include <bits/stdc++.h>
#include <array>




#include<cstring>
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
long long highestPowerof2(long long N)
{
    // if N is a power of two simply return it
    if (!(N & (N - 1)))
        return N;
    // else set only the most significant bit
    return 0x8000000000000000 >> (__builtin_clzll(N));
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
struct SegmentTree
{
private:int seg[200005];
public:
    void init(int n,int* ar)
    {
        memset(seg,0,sizeof(seg));
        for(int i=0;n>i;i++) add(n,i,ar[i]);
    }
    void add(int n,int k,int val)
    {
        k+=n;
        seg[k] += val;
        for(k/=2;k>=1;k/=2)
        {
            seg[k] = min(seg[2*k],seg[2*k+1]);
        }
    }
    int query(int n,int l,int r)
    {
        l+= n;
        r+= n;
        int sum = mxn;
        while(r>=l)
        {
            if(l%2 == 1) sum = min(sum,seg[l++]);
            if(r%2 == 0) sum = min(sum,seg[r--]);
            l/=2;
            r/=2;
        }
        return sum;
    }
};
//1010
//0010
void solve()
{
   int n;
   cin >> n;
   int sum = 0;
   int ar[n];
   for(int i=0;n>i;i++) cin >> ar[i];
    sort(ar,ar+n);
   for(int i =0 ;n > i ;i ++)
   {
        int x = ar[i];
        if(n/2 > i) sum -=x;
        if(i >= (n+1)/2) sum+=x;
   }
   cout << sum << endl;

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




