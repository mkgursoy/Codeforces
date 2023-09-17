#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
#define fr freopen("in.txt","r",stdin);freopen("outi.txt","w",stdout);
#define mxn 999999999ll
#define mnn -mxn
#define int long long
#define endl "\n"
#define mod  998244353
//1 1 3 4
//2y
/*
    1 4
    3 1
*/


void solve()
{
	int n,k,g;
	cin >> n >> k >> g;
	int bigB = (((g+1)/2)-1);
	k *=g;

 	cout << min(k,k-((k- bigB * n + g - 1)/g) * g) << endl;
}


int32_t main()
{
 	

	//fr

	int t;
	t=1;
	cin >> t;
	while(t--) solve();

}


//template




