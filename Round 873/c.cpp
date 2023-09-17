#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("O3,fast-math,inline")
#include <bits/stdc++.h>
#include<unordered_map>

using namespace std;
#define fr freopen("in.txt","r",stdin);freopen("outi.txt","w",stdout);
#define mxn 999999999
#define mnn -mxn
#define int long long
#define endl "\n"
#define mod 1000000007


void solve()
{
	int n;
	cin >> n;
	int ar[n];
	int bar[n];
	for(int i=0;n>i;i++) cin >> ar[i];

		for(int i=0;n>i;i++) cin >> bar[i];

			sort(ar,ar+n);

	int cev[n];

	for(int i=0;n>i;i++)
	{
       cev[i] = ar+n-upper_bound(ar,ar+n,bar[i]);
	}

	sort(cev,cev+n);
	int cvp = 1;
	for(int i=0;n>i;i++)
	{
        cvp*= cev[i]-i;
        cvp%=mod;

	}
	cout << cvp << endl;

}



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	//	fr
	
	int t;
	t=1;
	cin >> t;
	while(t--) solve();

}


//template



