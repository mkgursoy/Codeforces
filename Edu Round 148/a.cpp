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
	 string s;
	 cin >> s;

	 map<char,int> mp;
	  map<int,int> mp1;
	 for(int i=0;s.size()>i;i++)
	 {
        mp[s[i]]++;
	 }

	 for(auto it : mp) mp1[it.second]++;
	 	
	 int c = 0;



	 	for(auto it: mp1)
	 	{
            c+=it.second;
	 	}

	 	if(mp1[1] <= 1 && c-mp1[1] > 1)
	 	{
	 		cout << "YES" << endl;
	 	}
	 	else
	 		cout << "NO" << endl;
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










