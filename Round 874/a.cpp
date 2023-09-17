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
int n;
 cin >> n;
 pair<int,int> ar[n];
 pair<int,int> ar1[n];
 map<int,int> mp;
  for(int i=0;n>i;i++)
  {
     cin >> ar[i].first;
     ar1[i] = ar[i];
    
  }
  sort(ar,ar+n);
  for(int i=0;n>i;i++) mp[ar[i].first] = i+1;

  for(int i=0;n>i;i++)
  {
  	cout << n-mp[ar1[i].first]+1 << " ";
  }
  cout << endl;
 }

//0 1 1 2 2 4 7 8 9



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










