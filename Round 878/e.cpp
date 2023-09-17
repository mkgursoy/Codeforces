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
   string s1,s2;
   cin >> s1 >> s2;
   int n = s1.size();
   int bad = 0;
   for(int i = 0;n>i;i++)
   {
   	if(s2[i] != s1[i]) bad++;
   }
   queue<pair<int,int>> que;

   int t,q;
   cin >> t >> q;

   for(int i = 0;q > i;i++)
   {
   		//cout << bad << endl;
   		int test;
   		cin >> test;
   		while(que.size() > 0 && que.front().first == i)
   		{
   			if(s1[que.front().second] != s2[que.front().second]) bad++;
   			que.pop();
   		}
   		if(test == 1)
   		{
   			int x;
   			cin >> x;
   			x--;
   			que.push({t+i,x});
   			if(s2[x] != s1[x]) bad--;
   		}
   		if(test == 2)
   		{

   			int h1,x1,h2,x2;
   			cin >> h1 >> x1 >> h2 >> x2;
   			x1--;
   			x2--;
   			if(s1[x1] == s2[x1]) bad++;
   			if(s1[x2] == s2[x2]) bad++;
   			if(h1 == 1)
   			{
   				if(h2 == 1)
   				{

   					swap(s1[x1],s1[x2]);
   					if(s1[x1] == s2[x1]) bad--;
   					if(s1[x2] == s2[x2]) bad--;
   				} 
   				else
   				{

   					swap(s1[x1],s2[x2]);
   					if(s1[x1] == s2[x1]) bad--;
   					if(s1[x2] == s2[x2]) bad--;
   				}
   			}
   			else
   			{
   				if(h2 == 1)
   				{
   					swap(s2[x1],s1[x2]);
   					if(s1[x1] == s2[x1]) bad--;
   					if(s1[x2] == s2[x2]) bad--;
   				} 
   				else
   				{

   					swap(s2[x1],s2[x2]);
   					if(s1[x1] == s2[x1]) bad--;
   					if(s1[x2] == s2[x2]) bad--;
   				}
   			}

   			

   			


   		}
   		if(test == 3)
   		{
   			
   			if(bad == 0)
   			{
   				cout << "YES" << endl;

   			}
   			else
   				cout << "NO" << endl;
   		}
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




