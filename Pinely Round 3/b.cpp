/*
    Author:Matkap(prefixsumenjoyer23)
    
*/

#include <bits/stdc++.h>
#include <array>

using namespace std;

#define fr freopen("/Users/metinkasim/Documents/in.txt","r",stdin);freopen("/Users/metinkasim/Documents/out.txt","w",stdout);
#define int long long
#define endl "\n"
#define ar array
#define all(x) x.begin(),x.end()

int INF = 1e18;

void setIO(string name = "") 
{
	if (name.size())
	{
		freopen((name + ".in").c_str(), "r", stdin); // see /general/input-output
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
   	int tek = 0;
   	int mx = 0;
   	int a[n];
   	for(int i = 0;n > i;i++)
   	{
   		cin >> a[i];
   	}
   	sort(a , a + n);
   		for(int i = 1;INF > i;i *= 2)
   		{
   			map<int,int> mp;
   			int ans = 0;
   			for(int j = 0;n > j;j++)
   			{
   				if(!mp[a[j]%i]) ans++,mp[a[j]%i] = 1;
   			}
   			if(ans == 2)
   			{
   				cout << i << endl;
   				return;
   			}
   		}
   	

}	



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	//fr

	int t;
	t=1;
	cin >> t;
	while(t--) solve();

}