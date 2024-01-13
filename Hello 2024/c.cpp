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

int INF = 1e15;

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
   	int a[n];
   	int ans = 0;
   	int t1 = 1;
   	for(int i = 0;n > i;i++) cin >> a[i];
   	int l = INF , r = INF;
   	for(int i = 0;n > i;i++)
   	{
   		if(l < a[i] && r < a[i])
   		{
   			ans++;
   			if(l > r) r = a[i];
   			else
   				l = a[i];
   		}
   		else if(l >= a[i] && r >= a[i])
   		{
   			if(l > r) r = a[i];
   			else
   				l = a[i];
   		}
   		else if(l >= a[i]) l = a[i];
   		else
   			r = a[i];
   	}
   	cout << ans << endl;
}



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	

	int t;
	t=1;
	cin >> t;
	while(t--) solve();

}