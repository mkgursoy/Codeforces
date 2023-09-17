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
	vector<int> ar[n+1];
	for(int i=0;n>i;i++)
	{

		int x,y = 0;
		cin >> x;
		cin >> y;
		
		 
		 
		ar[x].push_back({y});

	    

	}
	for(int i=1;n>=i;i++) sort(ar[i].begin(),ar[i].end(),greater<int>());
	
//0,-13 ; 1,-2	
	int cvp = 0;
	
	
	for(int i=1;n>=i;i++)
	{
       
       for(int j=0;i > j && ar[i].size() > j;j++)
       {
         cvp += ar[i][j];
         
       }


	}
	
	cout << cvp << endl;
    

		


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




