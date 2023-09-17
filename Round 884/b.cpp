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

int sieve[200005];
void solve()
{
	int n;
	cin >> n;
	if(n == 1)
	{
		cout << "1" << endl;
		return;
	}
	if(n == 2)
	{
		cout << "1 2" << endl;
		return;
	}
	int ar[n];
	memset(ar,0,sizeof(ar));
	ar[0] = 3;
	ar[n-1] = 2;
	ar[n/2] = 1;
	int tmp = 4;
	for(int i=0;n>i;i++)
	{
		if(ar[i] == 0) ar[i] = tmp,tmp++;
	}
	for(int i=0;n>i;i++) cout << ar[i] << " ";
		cout << endl;

}
// 2 3 5 1 4

int32_t main()
{
 	memset(sieve,0,sizeof(sieve));
 	sieve[1] = 1;
 	for(int i=2;200005>=i;i++)
 	{
 		if(sieve[i] == 0)
 		{
 			for(int j=2*i;200005>=j;j+=i) sieve[j] = 1;
 		}
 	}

	//fr

	int t;
	t=1;
	cin >> t;
	while(t--) solve();

}


//template




