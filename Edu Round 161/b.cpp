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
   	int num[n+1];
   	int pref[n+1];
   	memset(num , 0 ,sizeof(num));
   	int ans = 0;
   	for(int i = 0;n > i;i++)
   	{
   		int x;
   		cin >> x;
   		num[x] += 1;
   	}
   	for(int i = 0;n >= i;i++)
   	{
   		if(!i)
   			pref[i] = num[i];
   		else
   			pref[i] = num[i] + pref[i-1];
   	}
   	for(int i = 0;n >= i;i++)
   	{
   		if(num[i] >= 3)
   		ans += ((num[i]) * (num[i] - 1) * (num[i] - 2)) / 6;
   		if(i != 0 && num[i] >= 2)
   		ans += pref[i-1] * (((num[i]) * (num[i] - 1))/2);
   	}
   	cout << ans << endl;
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