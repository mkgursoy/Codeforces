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
   string s[n];
   char h[n][m];

   for(int i = 0;n>i;i++)
   {
   		cin >> s[i];


   } 
   for(int i = 0;n>i;i++)
   {
   	int tmp = 0;
   		for(int j = 0;m>j;j++)
   		{
   			h[i][j] = '.';
   			if(s[i][j] == 'U' || s[i][j] == 'D') tmp++;
   		}

   		if(tmp%2 == 1)
   		{
   			cout << "-1" << endl;
   			return;
   		}
   }
   for(int i = 0;m>i;i++)
   {
   	int tmp = 0;
   		for(int j = 0;n>j;j++)
   		{
   			if(s[j][i] == 'L' || s[j][i] == 'R') tmp++;
   		}

   		if(tmp%2 == 1)
   		{
   			cout << "-1" << endl;
   			return;
   		}
   }

   	int sat[n];
   int sut[m];
   memset(sat,0,sizeof(sat));
   memset(sut,0,sizeof(sut));
   
   for(int j = 0;m>j;j++)
   {
   		
   		for(int i = 0;n > i;i++)
   		{
   			if(s[i][j] == 'L')
   			{
   				if(sut[j] > sut[j+1])
   				{
   					h[i][j] = 'B';
   					h[i][j+1] = 'W';
   					sut[j]--;
   					sut[j+1]++;
   					
   				}
   				else
   				{
   					h[i][j] = 'W';
   					h[i][j+1] = 'B';
   					sut[j]++;
   					sut[j+1]--;
   					
   				}

   				

   				

   			}
   		}
   }
   for(int i = 0;n>i;i++)
   {
   		
   		for(int j = 0;m > j;j++)
   		{
   			if(s[i][j] == 'U')
   			{
   				if(sat[i] > sat[i+1])
   				{
   					h[i][j] = 'B';
   					h[i+1][j] = 'W';
   					sat[i]--;
   					sat[i+1]++;
   					
   				}
   				else
   				{
   					h[i][j] = 'W';
   					h[i+1][j] = 'B';
   					sat[i]++;
   					sat[i+1]--;
   					
   				}

   				

   				

   			}
   		}
   }

   for(int i = 0;n>i;i++)
   {
   	for(int j =0;m>j;j++)
   	{
   		cout << h[i][j];
   	}
   	cout << endl;
   }
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




