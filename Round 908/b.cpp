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

int mxn = 1e18;
int mnn = -mxn;

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
   	ar<int,2> a[n];
   	for(int i = 0;n > i;i++) cin >> a[i][0],a[i][1] = i;
   	int b[n];
   	int cur = 1;
   	int f = 0;
   	for(int i = 0;n > i;i++) b[i] = 1;
   	sort(a,a+n);
   	for(int i = 1;n > i;i++)
   	{
   		int cnt = 0;
   		if(a[i][0] == a[i-1][0]) cur++;
   		if(cur == 4) cur = 2;
   		while(n > i && a[i][0] == a[i-1][0])
   		{
   			cnt++;
   			b[a[i][1]] = cur;	
   			i++;
   		}
   		if(cnt > 0)
   		{			
   			i--;
   		} 
   		if(cnt >= 1) f++;
   	}
   	if(f >= 2)
   	{
   		for(int i = 0;n > i;i++) cout << b[i] << " ";
   		cout << endl;
   	}
   	else
   	cout << "-1" << endl;
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