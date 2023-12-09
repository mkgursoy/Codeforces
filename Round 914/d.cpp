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
const int mxN = 2e5;
int ind[mxN] , ind2[mxN];
void solve()
{
	memset(ind,-1,sizeof(ind));
	map<int,int> mp;
  	int n;
  	cin >> n;
  	int a[n];
  	vector<int> b;
  	for(int i = 0;n > i;i++)
  	{
  		cin >> a[i];
  	}
  	for(int i = 0;n > i;i++)
  	{
  		int x;
  		cin >> x;
  		if(!i) b.push_back(x);
  		else if(b[b.size()-1] != x) b.push_back(x);
  		
  	}
  	int prev = -1;
  	int m = b.size();
  	int l = 0,r = 0;
  	while(n > l && m > r)
  	{
  		if(l > r && prev > r && b[r-1] > b[r])
  		{
  			cout << "NO" << endl;
  			return;
  		}
  		if(l < r && prev < r && b[r-1] < b[r])
  		{
  			cout << "NO" << endl;
  			return;
  		}
  		if(a[l] != b[r] && a[l] > b[r])
  		{
  			cout << "NO" << endl;
  			return;
  		}
  		if(a[l] == b[r]) prev = l,l++,r++;
  		else
  			l++;
  		//cout << l << " " << r << endl;
  	}
  	if(r == m) cout << "YES" << endl;
  	else
  		cout << "NO" << endl;



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
