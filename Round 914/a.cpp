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
   	int a,b;
   	cin >> a >> b;
   	int x1,y1,x2,y2;
   	cin >> x1 >> y1 >> x2 >> y2;
   	int ans = 0;
   	if(x1 + a + b == x2 && y1 + -a + b == y2) ans++;
   	if(x1 + a + b == x2 && y1 + a + -b == y2) ans++;
   	if(x1 + a + b == x2 && y1 + -a + -b == y2) ans++;
   	if(x1 + a + b == x2 && y1 + a + b == y2) ans++;
   	if(x1 + -a + b == x2 && y1 + -a + b == y2) ans++;
   	if(x1 + -a + b == x2 && y1 + a + -b == y2) ans++;
   	if(x1 + -a + b == x2 && y1 + -a + -b == y2) ans++;
   	if(x1 + -a + b == x2 && y1 + a + b == y2) ans++;
   	if(x1 + a + -b == x2 && y1 + a + b == y2) ans++;
   	if(x1 + a + -b == x2 && y1 + -a + b == y2) ans++;
   	if(x1 + a + -b == x2 && y1 + a + -b == y2) ans++;
   	if(x1 + a + -b == x2 && y1 + -a + -b == y2) ans++;
   	if(x1 + -a + -b == x2 && y1 + a + b == y2) ans++;
   	if(x1 + -a + -b == x2 && y1 + -a + b == y2) ans++;
   	if(x1 + -a + -b == x2 && y1 + a + -b == y2) ans++;
   	if(x1 + -a + -b == x2 && y1 + -a + -b == y2) ans++;
   	
   	
   	

   	cout << ans << endl;

}



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	fr

	int t;
	t=1;
	cin >> t;
	while(t--) solve();

}