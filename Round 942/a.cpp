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
   	vector<int> a(n),b(n);
   	for(auto& it : a) cin >> it;
   	for(auto& it : b) cin >> it;
   	sort(all(a));
   	sort(all(b));
   	int i = 0,j = 0;
   	for(int i = n-1;i >= 0;i--)
   	{
   		int start = i;
   		bool f = true;
   		for(int j = n-1;start >= 0;start--,j--)
   		{
   			if(a[start] > b[j])
   			{
   				f = !f;
   				break;
   			}
   		}
   		if(f)
   		{
   			cout << n-1-i << endl;
   			return;
   		}
   	}
   	cout << n << endl;
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