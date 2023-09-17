/*
    Author:Matkap(prefixsumenjoyer23)
    
*/
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("O3,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;
#define fr freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);


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
    
     if(power&2)
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
   	string s;
   	cin >> n >> s;
   	int cvp = 0;
   	int h = 0;
   	for(int i = 0;n/2 > i;i++)
   	{
   		if(s[i] != s[n-i-1])
   		{
   			cvp++;
   		}
   		else
   			h++;
   	}
   	
   	for(int i = 0;cvp > i;i++) cout << "0";
   	int d = 1;
   bool tek = false;
   	cout << "1";
   	for(int i = cvp+1;n >= i;i++)
   	{
   		if(h == 0 && tek == false && n%2 == 1)
   		{
   			tek = !tek;
   			cout << "1";
   			continue;
   		}
   		if(h<=0)
   		{
   			cout << "0";
   			continue;
   		}
   		if(d == 0 && n%2 == 0) cout << "1";
   		if(d == 1 && n%2 == 0) cout << "0";
   		if(n%2 == 1) cout << "1";
   		if(d == 0) h--;
   		
   		if(d == 0) d = 1;
   		else
   			d=0;
   		


   	}
   	cout << endl;
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


//template




