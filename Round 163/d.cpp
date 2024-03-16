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
   	string a;
   	cin >> a;
   	int n = a.size();
   	for(int l = n - n%2;l > 0;l-=2)
   	{
   		for(int i = 0;n >= i+l;i++)
   		{
   			bool flag = true;
   			for(int k = 0;l/2 > k;k++)
   			{
   				if(a[l/2 + k + i] == '?' || a[i + k] == '?') continue;
   				if(a[l/2 + k + i] != a[k + i])
   				{
   					flag = false;
   					break;
   				} 
   			}
   			if(flag)
   			{
   				cout << l << endl;
   				return;
   			}
   		}
   	}
   	cout << "0" << endl;
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