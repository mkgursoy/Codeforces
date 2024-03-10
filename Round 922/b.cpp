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
   	int b[n];
   	int ind_a[n];
   	for(int i = 0;n > i;i++)
   	{
   		cin >> a[i];
   		ind_a[a[i]-1] = i;
   	}
   	for(int i = 0;n > i;i++)
   	{
   		cin >> b[i];
   	}
   	for(int i = 0;n > i;i++)
   	{
   		if(ind_a[i] != i)
   		{
   			swap(b[ind_a[i]], b[i]);
   			swap(a[ind_a[i]], a[i]);
   			ind_a[a[ind_a[i]]-1] = ind_a[i];
   			ind_a[i] = i;
   			i--;
   		}
   	}
   	sort(a,a+n);
   	for(auto it : a) cout << it << " ";
   	cout << endl;
   	for(auto it : b) cout << it << " "; 
   	cout << endl;
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