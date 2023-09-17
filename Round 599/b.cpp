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
	int n;
	cin >> n;
   	int alf[26];

   	memset(alf,0,sizeof(alf));

   	string s,t;
   	cin >> s >> t;

   	for(auto it : s) alf[it-'a']++;
   		for(auto it : t) alf[it-'a']++;

   	for(int i = 0;26>i;i++)
   	{
   		if(alf[i]%2 == 1)
   		{
   			cout << "No" << endl;
   			return;
   		}
   	}
   	cout << "Yes" << endl;
   	vector<pair<int,int>> vec;
   	for(int i = 0;n>i;i++)
   	{
   		if(s[i] != t[i])
   		{
   			bool b = false;
   			for(int j = i+1;n > j;j++)
   			{
   				if(t[j] == t[i])
   				{
   					swap(s[i],t[j]);
   					
   					vec.push_back({i,j});
   					b = true;
   					break;
   				}

   			}
   			if(!b)
   			{
   				for(int j = i+1;n > j;j++)
   			{
   				if(s[j] == t[i])
   				{
   					swap(s[j],t[j]);
   					swap(s[i],t[j]);
   					
   					vec.push_back({j,j});
   					vec.push_back({i,j});
   					b = true;
   					break;
   				}

   			}
   			}
   			
   		}
   	}
   	
   	cout << vec.size() << endl;
   	for(auto it : vec) cout << it.first + 1 << " " << it.second + 1 << endl;
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




