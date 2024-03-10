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
   	int n,l;
   	cin >> n >> l;
   	ar<int,2> a[n];
   	for(int i = 0;n > i;i++)
   	{
   		cin >> a[i][1] >> a[i][0];
   	}
   	sort(a,a+n);
   	int ans = 0;
   	for(int i = 0;n > i;i++)
   	{
   		if(a[i][1] <= l) ans = 1;
   	}
   	for(int i = 0;n > i;i++)
   	{
   		int need = l - a[i][1];
   		priority_queue<int> pq;
   		int new_ans = 1;
   		for(int j = i+1;n > j;j++)
   		{
   			need += a[j-1][0];
   			need -= a[j][0];
   			if(need >= a[j][1])
   			{
   				need -= a[j][1];
   				pq.push(a[j][1]);
   				new_ans++;
   			}
   			else if(pq.size() && pq.top() > a[j][1])
   			{
   				need += pq.top();
   				pq.pop();
   				need -= a[j][1];	
   				pq.push(a[j][1]);
   			}
   			while(need < 0 && pq.size())
   			{
   				need += pq.top();
   				pq.pop();
   				new_ans--;
   			}
   			if(need >= 0)
   			{
   				ans = max(ans,new_ans);
   			}
   		}
   	}
   	cout << ans << endl;
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