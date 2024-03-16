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
const int mxN = 2e5 + 7;
string a[2];
int n;
int memo[2][mxN];
bool f(int x,int y)
{
	if(x == 0 && y == 0) return true;
	if(memo[y][x] != -1)
	{
		return memo[y][x];
	}
	bool a1 = false;
	if(x > 0)
	{
		if(a[y][x-1] == '>')
		{
			a1 |= f(x-1,((y-1) + 2)%2);
		}
	}
	if(x > 1)
	{
		if(a[y][x-1] == '>')
		{
			a1 |= f(x-2,y);
		}
	}
	if(a1) memo[y][x] = 1;
	else
		memo[y][x] = 0;
	return a1;	
}
void solve()
{	
   	cin >> n;
   	for(int i = 0;n + 1 >= i;i++)
   	{
   		memo[0][i] = -1;
   		memo[1][i] = -1;
   	}
  	cin >> a[0] >> a[1];
  	cout << (f(n-1,1) ? "YES" : "NO") << endl;
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