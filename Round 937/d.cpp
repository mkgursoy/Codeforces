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
const int mxN = 1e5;
vector<int> bin_dec;
bool dp[mxN+1];
bool chk(int a)
{
	bool f = true;
	while(a)
	{
		if(a%10 != 0 && a%10 != 1)
		{
			f = !f;
			break;
		}
		a/=10;
	}
	return f;
}
void solve()
{
   	int n;
   	cin >> n;
   	cout << (dp[n]?"YES":"NO") << endl;
}
void cnt()
{
	for(int i = 1;mxN >= i;i++)
	{

		if(chk(i)) bin_dec.push_back(i);
	}
	memset(dp,0,sizeof(dp));
   	dp[1] = 1;
   	for(int i = 2;mxN >= i;i++)
   	{
   		for(auto it : bin_dec)
   		{
   			if(i%it==0)
   			dp[i] |= dp[i/it];
   		}
   	}
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cnt();
	int tt;
	tt=1; 
	cin >> tt;
	while(tt--) solve();

}