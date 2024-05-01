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
   	string s;
   	cin >> s;
   	vector<int> div;
   	for(int i = 1;n >= i;i++)
   	{
   		if(n%i == 0) div.push_back(i);
   	}
   	for(auto it : div)
   	{
   		map<string,int> mp;
   		for(int i = 0;n > i;i+=it)
   		{
   			string h = s.substr(i,it);
   			mp[h]++;
   		}
   		if(mp.size() == 2)
   		{
   			int delt = 0;
   			vector<string> h;
   			for(auto i : mp)
   			{
   				h.push_back(i.first);
   			}
   			if(min(mp[h[0]],mp[h[1]]) != 1) continue;
   			for(int i = 0;it > i;i++)
   			{
   				if(h[0][i] != h[1][i]) delt++;
   			}
   			if(delt != 1) continue;
   			cout << it << endl;
   			return;
   		}
   		if(mp.size() == 1)
   		{
   			cout << it << endl;
   			return;
   		}
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