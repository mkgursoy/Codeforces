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
//1 2 3 1 2 3 1 2 3 1 2 3 1 2 3 
void solve()
{
   	int n,k;
   	cin >> n >> k;
   	int a[n];
   	for(int i = 0;n > i;i++) cin >> a[i];
   	int l = 0,r = (int)1e15;
   	int ans = 0;
   	while(r > l)
   	{
   		int mid = (l + r) / 2;
   		int cnt = 0;
   		vector<int> ind;
   		for(int i = 0;n > i;i++)
   		{
   			if(a[i] <= mid) cnt += mid - a[i],ind.push_back(i);
   		}
   		//cout << l << " " << r << " " << mid << " " << cnt << endl;
   		if(cnt > k)
   		{
   			r = mid;
   			continue;
   		}
   		int ans1 = mid * n - (n - 1);
   		for(int i = 0;n > i;i++)
   		{
   			if(a[i] > mid)
   			{
   				ans1++;
   			}
   			else
   			{
   				if(cnt + 1 <= k) ans1++,cnt++;
   			}
   		}
   		l = mid + 1, ans = max(ans, ans1);
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