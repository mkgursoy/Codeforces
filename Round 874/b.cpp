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
	int ar[n];
	int bar[n];
	map<int,int> mp1,mp2;
	for(int i=0;n>i;i++) cin >> ar[i];
	for(int i=0;n>i;i++) cin >> bar[i];
int temp = 0;
	for(int i=0;n>i;i++)
	{
		
		 if(i > 0&& ar[i] != ar[i-1])
		 {
		 	
		 	mp1[ar[i-1]] = max(mp1[ar[i-1]],temp);
		 	temp = 0;
		 }

		 	 temp++;
	}
	mp1[ar[n-1]] = max(temp,mp1[ar[n-1]]);
temp = 0;
	for(int i=0;n>i;i++)
	{
		
	       if(i > 0&& bar[i] != bar[i-1])
		 {
		 
		 	mp2[bar[i-1]] = max(mp2[bar[i-1]],temp);
		 		temp = 0;
		 }

		 	 temp++;
		 
	}
	mp2[bar[n-1]] = max(temp,mp2[bar[n-1]]);
	int cvp = 0;
	for(auto it: mp1)
	{
		
		
		cvp = max(cvp,it.second + mp2[it.first]);
	}
	for(auto it: mp2)
	{
		cvp = max(cvp,it.second + mp1[it.first]);
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




