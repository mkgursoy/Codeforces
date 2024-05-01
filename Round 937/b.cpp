/*
    Author:Matkap(prefix_sum)
*/

#include <bits/stdc++.h>
#include <array>

using namespace std;

#define int long long
#define endl "\n"
#define ar array
#define all(x) x.begin(),x.end()

const int INF = 1e17 , MOD = 1e9 + 7;

void setIO(string name = "") 
{
	if (name.size())
	{
		freopen((name + ".in").c_str(), "r", stdin); // For USACO
		freopen((name + ".out").c_str(), "w", stdout);
	}
}
int binpow(int base,int power)
{
	if(power == 1) return base;
	if(power == 0) return 1;
    
     if(power%2==1)
     {
     	 int a;
     	a = binpow(base,(power-1)/2);
     	return a*a*base;
     } 
     else
     {
     	 int a;
     	a = binpow(base,power/2);
     	return a*a;
     } 

}
void solve()
{
   	int n;
   	cin >> n;
   	n*=2;
   	char a[n][n];
   	for(int i = 0;n > i;i++)
   	{
   		for(int j = 0;n > j;j++)
   		{
   			int k = i/2;
   			int l = j/2;
   			k %= 2;
   			l %= 2;
   			if((k + l) % 2 == 0) a[i][j] = '#';
   			else
   				a[i][j] = '.';
   		}
   	}
   	for(int i = 0;n > i;i++)
   	{
   		for(int j = 0;n > j;j++) cout << a[i][j];
   		cout << endl;
   	}
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int tt;
	tt=1; 
	cin >> tt;
	while(tt--) solve();

}