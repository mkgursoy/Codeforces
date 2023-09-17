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
int gcd(int a, int b)
{

    if(b == 0) {
            return a;
    }
    else {
        return gcd(b, a % b);
    }
}

void solve()
{
	int n;
	cin >> n;
	

	int ar[n+1];
	map<int,int> mp;
	for(int i=0;n>i;i++)
	{
		int x;
		cin >> x;
		ar[x] = i+1; 
	} 
	for(int i=0;n>i;i++)
	{
      mp[abs(ar[i+1]-(i+1))]++;
	}
	int gc;
	
	for(auto it : mp)
	{
		gc = it.first;
		break;
	}
	for(auto it : mp)
	{
		gc = gcd(gc,it.first);
	}
	cout << gc << endl;

    

}
// 2 4 2 1


int32_t main()
{
	


	//fr

	int t;
	t=1;
	cin >> t;
	while(t--) solve();

}


//template




