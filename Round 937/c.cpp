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
   	string s;
   	cin >> s;
   	string modif = "AM";
   	int h = 0;
   	h += (s[0] - '0') * 10;
   	h += (s[1] - '0');
   	if(h >= 12) modif = "PM";
   	h %= 12;
   	if(h == 0) h = 12;
   	if(h >= 10)
   		cout << h << ":" << s[3] << s[4] << " " << modif << endl;
   	else
   		cout << "0" << h << ":" << s[3] << s[4] << " " << modif << endl;
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