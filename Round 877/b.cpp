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
	int n;
	cin >> n;
	int ar[n];
	int ind = 0;
	int ind2 = 0;
	int ind3 = 1;
	for(int i=0;n>i;i++)
	{
		cin >> ar[i];
		if(ar[i] == 1) ind = i+1;
		if(ar[i] == 2) ind2 = i+1;
		if(ar[i]>ar[ind3-1]) ind3 = i+1;
	}
	if(ind3 > ind && ind3 > ind2)
	{
		cout << max(ind,ind2) << " " << ind3 << endl;
		return;
	}
	if(ind3 < ind && ind3 < ind2)
	{
		cout << min(ind,ind2) << " " << ind3 << endl;
		return;
	}
	cout << "1 1" << endl;

	

		


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




