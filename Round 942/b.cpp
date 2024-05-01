/*
    Author:Matkap(prefix_sum)
*/

#include <bits/stdc++.h>
#include <array>

using namespace std;

#define int long long
#define endl "\n"
#define ar array
#define all(x) x.begin(),x.end()

const int INF = 1e17 , MOD = 1e9 + 7;

void setIO(string name = "") 
{
	if (name.size())
	{
		freopen((name + ".in").c_str(), "r", stdin); // For USACO
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
   	int n;
   	cin >> n;
   	string s;
   	cin >> s;
   	int cur_dist = -1;
   	string turn = "NO";
   	while(s.size())
   	{
   		bool b = false;
   		for(int i = 0;n > i;i++)
   		{
   			if(s[i] == 'U')
   			{
   				if(s[(i - 1 + n)%n] == 'U')
   					s[(i - 1 + n)%n] = 'D';
   				else
   					s[(i - 1 + n)%n] = 'U';
   				if(s[(i + 1)%n] == 'U')
   					s[(i + 1)%n] = 'D';
   				else
   					s[(i + 1)%n] = 'U';

   				s.erase(s.begin() + i);
   				n--;
   				b = !b;
   				break;
   			}
   		}
   		if(!b)
   		{
   			cout << turn << endl;
   			return;
   		}
   		if(turn == "YES") turn = "NO";
   		else
   			turn = "YES";
   	}
   	cout << turn << endl;
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int tt;
	tt=1; 
	cin >> tt;
	while(tt--) solve();

}