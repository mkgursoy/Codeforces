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
     	a = binpow(base,(power-1)/2) % MOD;
     	return (a%MOD)*1LL*(a%MOD)*(base % MOD) % MOD;
     } 
     else
     {
     	 int a;
     	a = binpow(base,power/2);
     	return (a%MOD) * 1LL * (a % MOD) % MOD;
     } 

}
void solve()
{
   	int n,k;
   	cin >> n >> k;
   	int sum = 0;
   	int mx = 0;
   	int val = 0;
   	for(int i = 0;n > i;i++)
   	{
   		int x;
   		cin >> x;
   		sum += x;
   		sum %= MOD;
   		mx = max(mx + x,x);
   		mx %= MOD;
   		val = max(val,mx);
   	}
   	if(val > 0)
   	{
   		cout << (((((binpow(2, k) - 1) % MOD) * 1LL * (val % MOD) % MOD) + sum % MOD) + MOD) % MOD << endl;
   	}
   	else
   		cout << (sum + MOD) % MOD << endl;

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