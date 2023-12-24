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
 	int w[n];
 	int l[n];
 	int r[n];
 	for(int i = 0;n > i;i++) cin >> l[i];
 	for(int i = 0;n > i;i++) cin >> r[i];  	
 	for(int i = 0;n > i;i++) cin >> w[i];
 	vector<ar<int,2>> sweep;
 	vector<int> seg;
 	for(int i = 0;n > i;i++)
 	{
 		sweep.push_back({l[i] , -1});
 		sweep.push_back({r[i] , 1});
 	}
 	sort(all(sweep));
 	stack<int> prev;
 	for(int i = 0;sweep.size() > i;i++)
 	{
 		if(sweep[i][1] == -1)
 		{
 			prev.push(sweep[i][0]);
 		}
 		else
 		{
 			seg.push_back(sweep[i][0] - prev.top());
 			prev.pop();
 		}
 	}
 	sort(w,w+n , greater<>());
 	sort(all(seg));
 	int ans = 0;
 	for(int i = 0;n > i;i++)
 	{
 		ans += seg[i] * w[i];
 	}
 	cout << ans << endl;
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