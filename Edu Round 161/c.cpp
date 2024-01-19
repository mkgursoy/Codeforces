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
   	int a[n];
   	for(int i = 0;n > i;i++) cin >> a[i];
   	int dist_l[n] , dist_r[n];
   	dist_l[0] = 0;
   	for(int i = 0;n-1 > i;i++)
   	{
		if(i == 0 || (a[i+1] - a[i]) < (a[i] - a[i-1]))
		{
			dist_l[i+1] = dist_l[i] + 1;
		}
		else
		{
			dist_l[i+1] = dist_l[i] + (a[i+1] - a[i]);
		}
	}
	dist_r[n-1] = 0;
	for(int i = n-1;i > 0;i--)
   	{
		if(i == n-1 || (a[i+1] - a[i]) > (a[i] - a[i-1]))
		{
			dist_r[i-1] = dist_r[i] + 1;
		}
		else
		{
			dist_r[i-1] = dist_r[i] + (a[i] - a[i-1]);
		}
	}
	int q;
	cin >> q;
	while(q--)
	{
		int a,b;
		cin >> a >> b;
		a--,b--;
		if(a < b)
			cout << dist_l[b] - dist_l[a] << endl;
		else
			cout << dist_r[b] - dist_r[a] << endl;
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