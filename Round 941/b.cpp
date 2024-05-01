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
   	int n,m;
   	cin >> n >> m;
   	string a[n];
   	for(auto& it : a) cin >> it;
   	bool f = false;
   	for(int i = 0;n > i;i++)
   	{
   		if(a[0][0] == a[i][m-1] && a[i][m-1] == a[n-1][0])
   		{
   			f = true;
   			break;
   		}
   		if(a[0][m-1] == a[i][0] && a[n-1][m-1] == a[i][0])
   		{
   			f = true;
   			break;
   		}
   	}
   	for(int i = 0;m > i;i++)
   	{
   		if(a[0][0] == a[n-1][i] && a[n-1][i] == a[0][m-1])
   		{
   			f = true;
   			break;
   		}
   		if(a[n-1][0] == a[0][i] && a[0][i] == a[n-1][m-1])
   		{
   			f = true;
   			break;
   		}
   	}
   	if(a[0][0] == a[n-1][m-1] || a[0][m-1] == a[n-1][0]) f = true;
   	if(f)
   	{
   		cout << "YES" << endl;
   	}
   	else
   		cout << "NO" << endl;
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