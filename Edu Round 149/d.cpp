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
/*
	num('(') = num(')')

*/
void solve()
{
	int n;
	cin >> n;
   	string s;
   	cin >> s;
   	int t = 0;
   	int c = 0;
   	for(int i = 0;n>i;i++)
   	{
   		if(s[i] == '(') t++;
   		else
   			c++;
   	}

   	if(t != c)
   	{
   		cout << "-1" << endl;
   		return;
   	}

   	stack<char> stk;

  	
   	for(int i = 0;n>i;i++)
   	{
   		if(!stk.size())
   		{
   			stk.push(s[i]);
   			continue;
   		}
   		if(stk.top() == s[i])
   		{
   			stk.push(s[i]);
   			continue;
   		}

   		int j = i;
   		while(stk.size() && s[j] != stk.top() && n > j) stk.pop(),j++;



   		i = j;

   	}

   	if(stk.size() != 0)
   	{
   		cout << "2" << endl;
   	}
   	else
   	{

   		cout << "1" << endl;

   		for(int i = 0;n>i;i++)
   		{
   			cout << "1 ";
   		}
   		cout << endl;
   	}
   	
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




