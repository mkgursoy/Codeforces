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
   	int n,k;
   	cin >> n >> k;
   	vector<int> a(n);
   	for(int i = 0;n > i;i++)
   	{
   		cin >> a[i];
   	}
   	sort(all(a));
   	if(k == 1)
   	{
   		int mn = a[0];
   		for(int i = 0;n > i;i++)
   		{
   			for(int j = i+1;n > j;j++)
   			{
   				mn = min(mn,a[j] - a[i]);
   			}
   		}
   		cout << mn << endl;
   	}
   	if(k == 2)
   	{
   		int mn = a[0];
   		for(int i = 0;n > i;i++)
   		{
   			for(int j = i+1;n > j;j++)
   			{
   				int k = (a[j] - a[i]);
   				mn = min(mn,k);
   				auto h = lower_bound(all(a),k);
   				if(h != a.end())
   				mn = min(mn , abs(k - *h));
   				if(h != a.begin())
   				mn = min(mn , abs(k - *(--h)));
   				
   			}
   		}
   		cout << mn << endl;

   	}
   	if(k > 2) cout << "0" << endl;
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