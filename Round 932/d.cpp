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
int C(int a)
{
	return (a+1)/2 + (a%2 == 0);
}
void solve()
{
   	int n,b;
   	cin >> n >> b;
   	int a[n];
   	int tek = 0;
   	int ans = (b+1) * (b+2) / 2;
   	for(int i = 0;n > i;i++)
   	{
   		cin >> a[i];
   		ans -= C(a[i]);
   		tek += a[i]%2;
   		ans -= b - a[i] + 1;
   	}
   	cout << ans + (tek * (tek + 1)/2) + ((n - tek) * (n - tek + 1) / 2) << endl;
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