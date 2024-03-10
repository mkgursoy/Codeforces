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
   	set<pair<int,ar<int,2>>> st;
   	int pref[2*n+1];
   	int ans = INF;
   	for(int i = 0;n > i;i++) cin >> a[i];
   	pref[0] = 0;
   	for(int i = 1;n >= i;i++)
   	{
   		pref[i] = a[i-1] + pref[i-1];
   	}
   	ar<int,2> arrr = {1,n}; 
   	st.insert(make_pair(pref[n],arrr));
   	ans = pref[n];
   	int blok = 0;
   	for(int i = 0;n > i;i++)
   	{
   		pair<int,ar<int,2>> data = *(--st.end());
   		int l = data.second[0]-1;
   		int r = data.second[1]-1;
   		int val = data.first;
   		st.erase(*st.end());
   		int piv = upper_bound(pref + l,pref+r+1,(pref[l] + pref[r+1]+1)/2) - pref;
   		//cout << r << " " << piv << endl;
   		int art = pref[r+1] - pref[piv+1];
   		//cout << val << " " << art << endl;
   		arrr = {l+1,piv};
   		st.insert(make_pair(val-art,arrr));
   		arrr = {piv+2,r+1};
   		st.insert(make_pair(art,arrr));
   		blok += a[piv];
   		data = *(--st.end());
   		ans = min(ans, max(blok , data.first));
   		//cout << ans << endl;
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