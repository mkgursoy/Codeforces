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
int binpow(int a,int b) 
{
    int res = 1;
    while (b > 0) 
    {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
const int mxN = 2e5 + 7;
int fact[mxN],inv[mxN];
void solve()
{
   	int c,n,m;
   	cin >> c >> n >> m;
   	int p[n];
   	int s[m];
   	for(int i = 0;n > i;i++) cin >> p[i];
   	for(int i = 0;m > i;i++) cin >> s[i];
   	if(s[m-1] != c || p[0] != 1 || s[0] != p[n-1])
   	{
   		cout << "0" << endl;
   		return;
   	}
   	// N is at p[n-1] = s[0]
   	int ans = 1;
   	int d = 0;
   	for(int i = 1;s[0] > i;i++)
   	{
   		if(i == p[d]) d++;
   		else
   		{
   			ans = ans * 1LL * (i-1) % MOD;
   		}
   	}
   	d = 0;
   	for(int i = s[0];c >= i;i++)
   	{
   		if(i == s[d]) d++;
   		else
   		{
   			ans = ans * 1LL * (c - i) % MOD;
   		}
   	}
   	//cout << ans << " " << fact[c-1] << " " << inv[s[0]-1] << " " << inv[c-s[0]] << endl;
   	ans = (ans * 1LL * fact[c-1]%MOD) * 1LL * (inv[s[0]-1] * 1LL * inv[c-s[0]]%MOD)%MOD;
   	cout << ans << endl;
}
void calcFac()
{
	inv[0] = 1;
	fact[0] = 1;
	for(int i = 1;mxN > i;i++)
	{
		fact[i] = i * 1LL * fact[i-1]%MOD;
	}
	inv[mxN-1] = 1LL * binpow(fact[mxN-1],MOD-2) % MOD;
	for(int i = mxN-2;i > 0;i--)
	{
		inv[i] = inv[i+1] * 1LL * (i+1) % MOD;
	}
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int tt;
	tt=1; 
	cin >> tt;
	calcFac();
	while(tt--) solve();

}