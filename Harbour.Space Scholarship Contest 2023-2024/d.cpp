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
   	string s[n];
   	for(int i = 0;n>i;i++) cin >> s[i];
   	int pref1[n][n];
   	int pref2[n][n];
   	int cvp = 0;
   	memset(pref1,0,sizeof(pref1));
   	memset(pref2,0,sizeof(pref2));
   	for(int i = 0;n>i;i++)
   	{
   		if(s[0][i] == '1')
   		{
   			pref1[1][max(0ll,i-1)] += 1;
   			pref2[1][min(n-1,i+1)] += 1;
   			cvp++;
   		}
   	}
   	for(int i1 = 1;n>i1;i1++)
   	{
   		
   		for(int i = 1;n>i;i++)
   		{
   			pref1[i1][i] = pref1[i1][i-1];
   		}
   		for(int i = n-2;i>=0;i--)
   		{
   			pref2[i1][i] = pref2[i1][i+1];
   		}
   		for(int i = 0;n>i;i++)
   		{
   			if(s[i1][i] == '1')
   			{
   				s[i1][i] = '0';
   				if(((pref1[i1][i]%2 + pref2[i1][i]%2)/2)%2 == 1)
   				{
   					cout << i1 << " " << i << endl;
   					cvp++;
   					if(i1 != n-1)
   			{
   				pref1[i1+1][max(0ll,i-1)] += 1;
   			
   				pref2[i1+1][min(n-1,i+1)] += 1;
   				
   			}

   				}

   			} 
   			else
   			{

   				s[i1][i] = '1';

   				if(((pref1[i1][i] + pref2[i1][i])/2)%2 == 0)
   				{
   					cout << i1 << " " << i << endl;
   					cvp++;
   					if(i1 != n-1)
   				{
   				pref1[i1+1][max(0ll,i-1)] += 1;
   				
   				pref2[i1+1][min(n-1,i+1)] += 1;
   				
   				}

   				}
   			}
   		}
   	}

   	cout << cvp << endl;

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




