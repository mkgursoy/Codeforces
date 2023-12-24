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

int INF = 1e17;

void setIO(string name = "") 
{
	if (name.size())
	{
		freopen((name + ".in").c_str(), "r", stdin); // see /general/input-output
		freopen((name + ".out").c_str(), "w", stdout);
	}
}
int gcd(int a, int b)
{

    if(b == 0) {
            return a;
    }
    else {
        return gcd(b, a % b);
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
   	int n , k;
   	cin >> n >> k;
   	int a[n];
   	int mn = INF,mx = -INF;
   	for(int i = 0;n > i;i++) cin >> a[i] , a[i] -= k,mx = max(mx , a[i]) , mn = min(mn , a[i]);
   	if(mn == mx)
   	{
   		cout << "0" << endl;
   		return;
   	}
   	else if((mn < 0 && mx > 0) || mx == 0 || mn == 0)
   	{
   		cout << "-1" << endl;
   		return;
   	}
   	int g = abs(a[0]);
   	for(auto it : a)
   	{
   		g = gcd(g , abs(it));
   	}
   	int ans = 0;
   	for(int i = 0;n > i;i++)
   	{
   		ans += (abs(a[i])/g) - 1;
   	}
   	cout << ans << endl;
   	
}



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//	fr

	int t;
	t=1;
	cin >> t;
	while(t--) solve();

}