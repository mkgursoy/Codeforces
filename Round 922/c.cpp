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
   	int a,b,r;
   	cin >> a >> b >> r;
   	int a2 = a, b2 = b;
   	if(a > b) swap(a,b);
   	bitset<64> a1 = a;
   	bitset<64> b1 = b;
   	int num = 0;
   	for(int i = 63;i>=0;i--)
   	{
   		if(b1[i] && !a1[i])
   		{
   			if((num + binpow(2,i)) <= r && b-binpow(2,i) > a+xbinpow(2,i))
   			{
   				num += binpow(2,i);
   				b -= binpow(2,i);
   				a += binpow(2,i);
   			}
   		}
   	}
   	cout << b-a << endl;

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