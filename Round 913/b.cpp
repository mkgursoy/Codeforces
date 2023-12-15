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

int INF = 1e18;

void setIO(string name = "") 
{
	if (name.size())
	{
		freopen((name + ".in").c_str(), "r", stdin); // see /general/input-output
		freopen((name + ".out").c_str(), "w", stdout);
	}
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
void solve()
{
   	int up = 0;
   	int low = 0;
   	string s;
   	cin >> s;
   	string s1 = "";
   	int n = s.size();
   	for(int i = n-1;i>=0;i--)
   	{
   		if(s[i] == 'b') low++;
   		else if(s[i] == 'B')
   			up++;
   		if(s[i] != 'b' && s[i] != 'B')
   		{
   			if(s[i] - 'a'>= 0)
   			{
   				if(low > 0) low--;
   				else
   					s1 += s[i];
   			}
   			else
   			{
   				if(up > 0) up--;
   				else
   					s1 += s[i];
   			}
   		}
   	}
   	reverse(all(s1));
   	cout << s1 << endl;
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