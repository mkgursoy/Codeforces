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
/*
	1 2 3 4
	2 4 3 3
	3 3 3 4
	4 4 4 4
	
*/
void solve()
{
   	int n;
   	cin >> n;
   	int ans = 0;
   	for(int i = 0;n > i;i++)
   	{
   		ans += (i + 1) * ((i + 1) * 2 - 1);
   	}
   	cout << ans << " " << 2 * n - 1 << endl;
   	for(int i = 0;n > i;i++)
   	{
   		cout << "2 " << i + 1 << " ";
   		for(int j = n;j >= 1;j--) cout << j << " ";
   		cout << endl;
   		if(i != n - 1)
   		{
   			cout << "1 " << i + 2 << " ";
   			for(int j = n;j >= 1;j--) cout << j << " ";
   			cout << endl;
   		}
   	}
   	
}
/*
	2 2
	2 1
*/
int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int tt;
	tt=1; 
	cin >> tt;
	while(tt--) solve();

}