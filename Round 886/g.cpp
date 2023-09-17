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
   	cin >> n;
   	map<int,int> x;
   	map<int,int> y;
   	map<int,int> lxy;
   	map<int,int> rxy;

   	pair<int,int> ar[n];

   	for(int i = 0;n>i;i++)
   	{
   		int x1,y1;
   		cin >> x1 >> y1;

   		ar[i] = {x1,y1};
   		x[x1]++;
   		y[y1]++;
   		lxy[x1 + y1]++;
   		rxy[x1-y1]++;
   	}
   	int cvp = 0;
   	for(int i = 0;n>i;i++)
   	{
   		int x1 = ar[i].first;
   		int y1 = ar[i].second;
   		cvp += x[x1];
   		cvp += y[y1];
   		cvp += lxy[x1 + y1];
   		cvp += rxy[x1-y1];
   		cvp -= 4;
   	}

   	cout << cvp << endl;
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


//template




