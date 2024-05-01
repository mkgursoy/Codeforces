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
int tt = 1;
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
int x;
void solve()
{
   	int a,b,c;
   	cin >> a >> b >> c;
   	if(a + 1 != c)
   	{
   		cout << "-1" << endl;
   		return;
   	}
   	if(a + b + c == 1)
   	{
   		cout << "0" << endl;
   		return;
   	}
   	if(a == 0)
   	{
   		cout << b << endl;
   		return;
   	}
   	int k = a - binpow(2, (int)log2(a)) + 1;
   	k*=2;
   	if(k == 0) k = c;
   	//cout << k << " ";
   	cout << (int)log2(a) + 1 +  (b - (c - k) + c - 1)/c << endl;
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin >> tt;
	for( x = 1;tt >= x;x++) solve();

}