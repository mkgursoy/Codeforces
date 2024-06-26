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
   	int n,k;
   	cin >> n >> k;
   	vector<int> vec;
   	int num = 1;
   	while(num * 2 <= k) num *= 2;
   	vec.push_back(k - (num - 1) - 1);
   	vec.push_back(k + 1);
   	vec.push_back(k + (num - 1) + 2);
   	int num1 = 1;
   	while(num1 < 1000000)
   	{
   		if(num1 == num) num1 *= 2;
   		else
   		vec.push_back(num1),num1 *= 2;
   	} 
   	cout << vec.size() << endl;
   	for(auto it : vec) cout << it << " ";
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