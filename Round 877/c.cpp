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
    int n,k;
    cin >> k >> n;
    if(k == 4)
    {
    	for(int i=2;i>=0;i-=2)
    {
    	int yaz = i*n+1;
    	for(int j = 0;n>j;j++)
    	{
    		cout << yaz+j << " ";
    	}
    	cout << endl;
    }

     for(int i=3;i>=0;i-=2)
    {
    	int yaz = i*n+1;
    	for(int j = 0;n>j;j++)
    	{
    		cout << yaz+j << " ";
    	}
    	cout << endl;
    }
    return;
    }
    for(int i=0;k>i;i+=2)
    {
    	int yaz = i*n+1;
    	for(int j = 0;n>j;j++)
    	{
    		cout << yaz+j << " ";
    	}
    	cout << endl;
    }

     for(int i=1;k>i;i+=2)
    {
    	int yaz = i*n+1;
    	for(int j = 0;n>j;j++)
    	{
    		cout << yaz+j << " ";
    	}
    	cout << endl;
    }
   

cout << endl;

    
}


//

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



