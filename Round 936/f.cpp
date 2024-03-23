/*
    Author:Matkap(prefix_sum)
*/
#pragma GCC optimize("O3")
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"
#define ar array
#define all(x) x.begin(),x.end()

const int INF = 1e17 , MOD = 1e9 + 7;
const int mxN = 1e6 + 5;
vector<int> tree;
vector<int> a;
vector<int> pos;
vector<int> ans;
int n,q;
vector<ar<int,3>> Q;
void init()
{
	tree.assign(n+3,0);
}
int query(int x)
{
	int s = 0;
	for(int i = x;i > 0;i -= i&-i) s += tree[i];
	return s;
}
void update(int x,int val)
{
	for(int i = x;n >= i;i += i&-i) tree[i] += val;
}
inline void solve()
{
   	cin >> n >> q;
   	a.resize(n);
   	pos.resize(n+1);
   	ans.resize(q);
   	for(int i = 0;n > i;i++) cin >> a[i],pos[a[i]] = i;
   	init();
   	Q.resize(q);
   	for(int i = 0;q > i;i++)
   	{
   		int x,y;
   		cin >> x >> y;
   		Q[i] = {x,y,i};
   	}
   	sort(Q.rbegin(),Q.rend());
   	int ind = n-1;
   	vector<int> dp;
   	dp.assign(n+3,0);
   	for(auto it : Q)
   	{
   		while(ind >= it[0]-1)
   		{
   			dp[ind] = 1;
   			//cout << ind << " " << a[ind] << endl;
   			for(int i = a[ind];n >= i;i += a[ind])
   			{
   				if(pos[i] < ind) continue;
   				
   					for(int j = i * 2;n >= j;j += i)
   					{
   						if(pos[i] <= pos[j])
   						{
   							dp[pos[j]] += dp[pos[i]];
   						}
   					}	
   				
   				
   			}
   			for(int i = a[ind];n >= i;i += a[ind])
   			{
   				if(pos[i] >= ind)
   				{
   					update(pos[i]+1,dp[pos[i]]);
   					dp[pos[i]] = 0;
   				}
   			}
   			ind--;
   		}
   		ans[it[2]] = query(it[1]);
   		//cout << query(1,1,n,1,n) << endl;
   	}
   	for(auto it : ans) cout << it << " ";
   	cout << endl;
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