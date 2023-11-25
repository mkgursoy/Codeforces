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
// 4 3 2 , 1 2 4
void solve()
{
   	int n,x;
   	cin >> n >> x;
   	ar<int,2> a[n];
   	ar<int,2> b[n];
   	int ans[n];
   	for(int i = 0;n > i;i++) cin >> a[i][0] , a[i][1] = i;
   	for(int i = 0;n > i;i++) cin >> b[i][0] , b[i][1] = i;
   	sort(a , a + n , greater<>());
   	sort(b , b + n);
   	sort(b , b + x , greater<>());
   	for(int i = 0;x > i;i++)
   	{
   		if(a[i][0] <= b[i][0])
   		{
   			cout << "NO" << endl;
   			return;
   		}
   	}

   	sort(a + x , a + n);
   	int tmp = 0;
   	for(int i = 0;n > i;i++)
   	{
   		if(a[i][0] > b[i][0]) tmp += 1;
   	}

   	if(tmp == x)
   	{
   		cout << "YES" << endl;
   		for(int i = 0;n > i;i++)
   		{
   			ans[a[i][1]] = b[i][0];
   		}
   		for(auto it : ans) cout << it << " ";
   		cout << endl;
   	}
   	else
   		cout << "NO" << endl;
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