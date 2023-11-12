/*
    Author:Matkap(prefixsumenjoyer23)
    
*/

#include <bits/stdc++.h>
#include <array>

using namespace std;

#define fr freopen("/Users/metinkasim/Documents/in.txt","r",stdin);freopen("/Users/metinkasim/Documents/out.txt","w",stdout);
#define int long long
#define endl "\n"
#define ar array
#define all(x) x.begin(),x.end()

int mxn = 1e18;
int mnn = -mxn;

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
void solve()
{
	int n;
	cin >> n;
   	string s;
   	cin >> s;
   	if(n == 1)
   	{
   		if(s[0] == 'A') cout << 'A' << endl;
   		else 
   			cout << 'B' << endl;
   		return;
   	}
   	bool a = false,b = false;
   	for(int i = 1;n > i;i++)
   	{
   		int tmpa = 0,tmpb = 0,ansa = 0,ansb = 0,fin = 0;
   		for(int j = 0;n > j;j++)
   		{
   			if(s[j] == 'A') tmpa++;
   			else
   				tmpb++;

   			if(tmpa == i)
   			{
   				ansa++;
   				tmpb = tmpa = 0;
   				fin = 0;
   			}
   			if(tmpb == i)
   			{
   				ansb++;
   				tmpb = tmpa = 0;
   				fin = 1;
   			}
   		}

   		if(tmpa == 0 && tmpb == 0)
   		{
   			if(fin == 0) a = true;
   			else
   				b = true;
   		}
   		if(a && b)
   		{
   			cout << "?" << endl;
   			return;
   		}
   	}
   	if(a ) cout << "A" << endl;
   	else
   		cout << "B" << endl;
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