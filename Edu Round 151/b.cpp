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
	int x1,y1,x2,y2,x3,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	int cvpy = 0,cvpx = 0;
	if((y2 >= y1 && y1 >= y3) || (y1>=y2 && y3 >= y1))
	{
		
			cvpy = 1;
		
		
	}
	
	else
	{
		cvpy = min(abs(y1-y2)+1,abs(y1-y3)+1);
	}
	if((x2 >= x1 && x1 >= x3) || (x1>=x2 && x3 >= x1))
	{
		
			cvpx = 1;

		
	}
	
	else
	{
		cvpx = min(abs(x1-x2)+1,abs(x1-x3)+1);
	}

	cout << cvpx+cvpy-1 << endl;


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




