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
   	int mex = 0;
   	int a[n];
   	map<int,int> mp;
   	for(int i = 0;n > i;i++)
   	{
   		cin >> a[i];
   		mp[a[i]]++;
   	}
   	int prev = -1;
   	bool f = true;
   	for(auto it : mp)
   	{
   		if(it.first - 1 != prev)
   		{
   			f = false;
   			mex = prev+1;
   			break;
   		}
   		prev = it.first;
   	}
   	if(f)
   	mex = prev+1;
   	int x = 0;
   	mp.clear();
   	vector<ar<int,2>> vec;
   	int start1 = 1;
   	for(int i = 0;n > i;i++)
   	{
   		if(a[i] < mex && mp[a[i]] == 0)
   		{
   			mp[a[i]]++;
   			x++;
   		}
   		if(x == mex)
   		{
   			mp.clear();
   			x = 0;
   			vec.push_back({start1,i+1});
   			start1 = i+2;
   			
   			
   		}
   	}	
   	if(vec.size() != 1)
   	{
  		cout << vec.size() << endl;
  			for(int i = 0;vec.size()-1 > i;i++) 
  			{
  				ar<int,2> it = vec[i];
  				cout << it[0] << " " << it[1] << endl;
  			}
  		cout << vec[vec.size()-1][0] << " " << n << endl;
   		return;
   	}
   	cout << "-1" << endl;
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