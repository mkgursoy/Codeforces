#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("O3,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;
#define fr freopen("in.txt","r",stdin);freopen("outi.txt","w",stdout);
#define mxn 999999999
#define mnn -mxn
#define int long long
#define endl "\n"
#define mod  998244353
#define all(x) x.begin(),x.end()

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
pair<int,int> fib[901];
void solve()
{
  int n,k;
  cin >> n >> k;
  if(k >= 901) 
  {
  	cout << 0 << endl;
  	return;
  }
  pair<int,int> cvp  = fib[k];
  int res = 0;
  for(int i=0;n>=i;i++)
  {
  	int temp = (n-cvp.first*i);
  	if(temp % cvp.second == 0)
  	{
  		if(temp / cvp.second >= i) res++;
  	}
  }
  cout << res << endl;

}



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	//fr
	pair<int,int> vec = {1,0},delay = {0,1};
	fib[1] = vec;
	fib[2] = delay;
	for(int i=3;901>i;i++)
	{
		vec = fib[i-2];
		delay = fib[i-1];
		int x = vec.first + delay.first;
		int y = vec.second + delay.second;
		fib[i] = {x,y};
		vec = delay;
		delay = fib[i];

	}

	int t;
	t=1;
	cin >> t;
	while(t--) solve();

}


//template




