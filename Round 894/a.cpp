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
   	int n,m;
   	cin >> n >> m;
   	char ar[n][m];
   	map<int,int> v;
   	map<int,int> i;
   	map<int,int> k;
   	map<int,int> a;
   	for(int i1 = 0;n>i1;i1++)
   	{
   		for(int j = 0;m>j;j++)
   		{
   			cin >> ar[i1][j];

   			if(ar[i1][j] == 'v') v[j]++;
   			if(ar[i1][j] == 'i') i[j]++;
   			if(ar[i1][j] == 'k') k[j]++;
   			if(ar[i1][j] == 'a') a[j]++;
   		} 
   	}
   	bool v1 = false;
   	bool v2 = false;
   	bool v3 = false;
   	bool v4 = false;
   	for(int i1 = 0;m > i1;i1++)
   	{
   		if(v[i1] > 0 && !v1) v1 = true;
   		else if(i[i1] > 0 && !v2 && v1) v2 = true;
   		else if(k[i1] > 0 && !v3 && v2 && v1) v3 = true;


   		else if(v1 && v2 && v3 && a[i1] > 0)
   		{
   			cout << "YES" << endl;
   			return;
   		}

   		
   	}
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


//template




