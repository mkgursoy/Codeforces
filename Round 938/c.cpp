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
   	int n,k;
   	cin >> n >> k;
   	int a[n];
   	for(int i = 0;n > i;i++)
   	{
   		cin >> a[i];
   	}
   	int l = 0;
   	int r = n-1;
   	int cur = 0;
   	int turn = 0;
   	while(r > l && k > 0)
   	{
   		if(a[r] > a[l])
   		{
   			if(turn == 1) a[r]--,k--,turn = 0;
   			if(k >= a[l] * 2 - 1)
   			{
   				k -= a[l] * 2 - 1;
   				a[r] -= a[l] - 1;
   				cur++;
   				l++;
   				turn = 1;  				
   			}
   			else
   			{
   				cout << cur << endl;
   				return;
   			}

   		}
   		else if(a[l] > a[r])
   		{
   			if(turn == 0) a[l]--,k--,turn = 1;
   			if(k >= a[r] * 2 - 1)
   			{
   				k -= a[r] * 2 - 1;
   				a[l] -= a[r] - 1;
   				cur++;
   				r--;
   				turn = 0;
   			}
   			else
   			{
   				cout << cur << endl;
   				return;
   			}
   		}
   		else
   		{
   			if(turn == 0)
   			{
   				if(k >= 2 * a[l] - 1)
   				{
   					turn = 1;
   					k -= 2 * a[l] - 1;
   					l++;
   					cur++;
   					a[r] = 1;
   				}
   				else
   				{
   					cout << cur << endl;
   					return;
   				}
   			}
   			else
   			{
   				if(k >= 2 * a[r] - 1)
   				{
   					turn = 0;
   					k -= 2 * a[r] - 1;
   					r--;
   					cur++;
   					a[l] = 1;
   				}
   				else
   				{
   					cout << cur << endl;
   					return;
   				}
   			}
   		}
   		//for(auto it : a) cout << it << " ";
   		//cout << endl;
   	}
   	if(k >= a[l] && l == r)
   	{
   		cur++;
   	}
   	cout << cur << endl;
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
