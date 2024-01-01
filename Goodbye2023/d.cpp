/*
    Author:Matkap(prefix_sum)
    
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
   	int n;
   	cin >> n;
   	if(n == 1)
   	{
   		cout << "1" << endl;
   		return;
   	} 
   	int pos1 = n-1 , pos2 = n/2;
   	string s = "1";
   	for(int i = 0;n-1 > i;i++) s += "0";
   	while(pos2 != 0)
   	{
   		string temp = s;
   		temp[pos1] = '9' , temp[pos2] = '6';
   		cout << temp << endl;
   		pos1 -= 2;
   		pos2 -= 1;
   	}
   	pos1 = n-1 , pos2 = n/2;
   	s = "9";
   	for(int i = 0;n-1 > i;i++) s += "0";
   	while(pos2 != 0)
   	{
   		string temp = s;
   		temp[pos1] = '1' , temp[pos2] = '6';
   		cout << temp << endl;
   		pos1 -= 2;
   		pos2 -= 1;
   	}
   	s = "196";
   	for(int i = 0;n-3 > i;i++) s += "0";
   	cout << s << endl;
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