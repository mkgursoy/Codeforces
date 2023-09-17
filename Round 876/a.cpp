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

void solve()
{
int n,k;
cin >> n >> k;
int cvp = n;
  for(int i=1;n>=i;i++)
  {
      cvp = min(cvp,(i+k-2)/k + (n-i+k-1)/k);
  }
  cout << cvp+1 << endl;
  
 }

//0 1 1 2 2 4 7 8 9

//1 0 0 1 _ 1 0 0 1

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
//1 0 1 0











