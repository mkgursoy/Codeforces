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
   	if(n == 2)
   	{
   		cout << "2" << endl;
   		return;
   	}
   	int x1 = 0;
   	for(int i = 1;n>=i;i++)
   	{
   		int sum = 0;
   		int mx = 0;
   		for(int j = 1;i>=j;j++)
   		{
   			mx = max(j*j,mx);
   			sum += j*j;
   		}
   		for(int j = i+1;n>=j;j++)
   		{
   			mx = max(j*(n-(j-i-1)),mx);
   			sum += j*(n-(j-i-1));
   		}
   		x1 = max(x1,sum-mx);
   	}
   	cout << x1 << endl;
}

//1 2 3 4 5 6 10 9 8 7
//1 2 3 4 5 6 7 8 9 10

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




