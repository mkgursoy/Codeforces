#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("O3,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;
#define fr freopen("in.txt","r",stdin);freopen("outi.txt","w",stdout);
int mxn = 1e9;
int mnn = -mxn;
#define int double
#define endl "\n"
#define mod  998244353
#define all(x) x.begin(),x.end()



void solve()
{
   long long  n;
   double m,k;
   cin >> n >> m >> k;
   int ar[n];
   int cvp = 0;

   for(long long i=0;n>i;i++)
   {
         cin >> ar[i];
         cvp+= (k*m)/2.0;

         if(i>0)
         {
            if(ar[i] < ar[i-1] + k)
            {
                 int x=k-(ar[i]-ar[i-1]);
            cvp-=(x/k)*(x/k)*m*k/2.0;
            }
           
         }

   }
   cout << setprecision(9) << cvp << endl;


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




