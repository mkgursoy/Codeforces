/*
    Author:Matkap(prefixsumenjoyer23)
    
*/

#include <bits/stdc++.h>

using namespace std;
#define fr freopen("/Users/metinkasim/Documents/in.txt","r",stdin);freopen("/Users/metinkasim/Documents/out.txt","w",stdout);


#define int long long
#define endl "\n"
#define mod  998244353
#define all(x) x.begin(),x.end()

int mxn = 1e18;
int mnn = -mxn;

void outarr(int ans[],int n)
{
	for (int i = 0; i < n; i++) cout << ans[i] << " \n"[i == n - 1];
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
int gcd(int a, int b)
{

    if(b == 0) {
            return a;
    }
    else {
        return gcd(b, a % b);
    }
}
int lcm(int a,int b)
{
	return (a*b)/gcd(a,b);
}

void solve()
{
   	int n;
   	cin >> n;
   	int ar[n];
   	int top = 0;
   	int ans = 0;
   	for(int i = 0;n > i;i++) cin >> ar[i],top += ar[i];
   	sort(ar,ar+n);
   	ans = (top + 1)/2;
   	top = 0;
   	for(int i = 0;n > i;i++)
   	{
   		top += ar[i];

   		if(top == ans)
   		{
   			cout << ans + (n - i - 1) << endl;
   			return;
   		}
   		else if(top > ans)
   		{
   			cout << ans + (n - i) << endl;
   			return;
   		}
   	}
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


