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
int msb(int n)
{
	int k = __builtin_clz(n);
	return 1 << (31 - k);
}
void solve()
{
   	int n;
   	cin >> n;
   	int ar[n];
   	int bits[32];
   	int bitsneg[32];
   	int esit = 0;
   	memset(bits,0,sizeof(bits));
   	memset(bitsneg,0,sizeof(bitsneg));
   	int toplam = 0;
   	for(int i = 0;n>i;i++)
   	{
   		cin >> ar[i];
   		toplam += ar[i];

   	}
   	if(toplam%n != 0)
   	{
   		cout << "No" << endl;
   		return;
   	}
   	toplam/=n;
   	for(int i = 0;n>i;i++)
   	{
   		if(toplam == ar[i])
   		{
   			esit++;
   			continue;
   		}
   		if(binpow(2,log2(abs(toplam - ar[i]))) != abs(toplam-ar[i]))
   		{
   			cout << "No" << endl;
   			return;
   		}

   		if(toplam > ar[i]) bits[(int)log2(toplam-ar[i])]++;
   		else
   			bitsneg[(int)log2(abs(toplam-ar[i]))]++;
   	}
   	int sum = 0;
   	for(int i = 0;32>i;i++)
   	{
   		if((bits[i] - bitsneg[i])%2 == 1) 
   		{
   			cout << "No" << endl;
   			return;
   		}
   		esit -= abs(bits[i] - bitsneg[i])/2;
   	}

   	if(esit == 0)
   	cout << "Yes" << endl;
   else
   	cout << "No" << endl;
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


//template




