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

void solve()
{
   	

	int toplam = 0;
   	for(int i = 0;10>i;i++)
   	{
   		for(int j = 0;10 > j;j++)
   		{
   			char x;
   			cin >> x;
   			if(x == 'X')
   			{
   				if(i == 0 || i == 9)
   				{
   					toplam += 1;
   				}
   				else if(i == 1 || i == 8)
   				{
   					if(j > 0 && 9 > j)
   					{
   						toplam += 2;
   					}
   					else
   						toplam += 1;
   				}
   				else if(i == 2 || i == 7)
   				{
   					if(j > 1 && 8 > j)
   					{
   						toplam += 3;
   					}
   					else if(j > 0 && 9 > j)
   						toplam += 2;
   					else
   						toplam += 1;
   				}
   				else if(i == 3 || i == 6)
   				{
   					if(j > 2 && 7 > j)
   					{
   						toplam += 4;
   					}
   					else if(j > 1 && 8 > j)
   					{
   						toplam += 3;
   					}
   					else if(j > 0 && 9 > j)
   						toplam += 2;
   					else
   						toplam += 1;
   				}
   				else if(i == 4 || i == 5)
   				{
   					if(j > 3 && 6 > j)
   					{
   						toplam += 5;
   					}
   					else if(j > 2 && 7 > j)
   					{
   						toplam += 4;
   					}
   					else if(j > 1 && 8 > j)
   					{
   						toplam += 3;
   					}
   					else if(j > 0 && 9 > j)
   						toplam += 2;
   					else
   						toplam += 1;
   				}
   			}
   		}
   	}

   	cout << toplam << endl;
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




