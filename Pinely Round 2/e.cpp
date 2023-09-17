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
    
     if(power&2)
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
   	int n,m,k;
   	cin >> n >> m >> k;
   	int ar[n];
   	for(int i = 0;n>i;i++)
   	{
   		cin >> ar[i];
   	}

   	vector<int> adj[n];
   	int ind[n];
   	int ind1[n];

   	memset(ind,0,sizeof(ind));

   	for(int i = 0;m>i;i++)
   	{
   		int x,y;
   		cin >> x >> y;

   		adj[x-1].push_back(y-1);
   		ind[y-1]++;

   	}
   	   	queue<int> q;
   	for(int i = 0;n>i;i++)
   	{
   		if(ind[i] == 0) q.push(i);
   		ind1[i] = ind[i];
   	}
   	vector<pair<int,int>> top;



   	while(q.size())
   	{
   		int piv = q.front();
   		q.pop();
   		top.push_back({piv,ind1[piv]});

   		for(auto it : adj[piv])
   		{
   			ind[it]--;

   			if(ind[it] == 0) top.push_back({it,ind1[it]});
   		}
   	}
   	vector<int> final_top;
   	vector<int> vec;
   	vec.push_back(ar[0]);
   		for(int i=1;n>i;i++)
   		{
   			if(top[i].second != top[i-1].second)
   			{
   				int jj = vec.size();
   				cout << jj << endl;
   				vec.push_back(k);
   				sort(all(vec));
   				
   				int h = jj-1;
   				for(int j = 0;jj-1>j;j++)
   				{
   					if(k-vec[h+1] + vec[h] > k-vec[j+1] + vec[j])
   				{
   					h = j;
   				}		
   					
   				}
   				
   				
   				for(int k = h;jj>k;k++)
   				{
   					final_top.push_back(vec[k]);
   				}
   				for(int k = 0;h>k;k++)
   				{
   					final_top.push_back(vec[k]);
   				}
   				vec.clear();
   			}
   			vec.push_back(ar[i]);
   		}
   		int jj = vec.size();
   				vec.push_back(k);
   				sort(all(vec));
   				
   				int h = jj-1;
   				for(int j = 0;jj-1>j;j++)
   				{
   					if(k-vec[h+1] + vec[h] > k-vec[j+1] + vec[j])
   				{
   					h = j;
   				}		
   					
   				}
   				
   				for(int k = h+1;jj>k;k++)
   				{
   					final_top.push_back(vec[k]);
   				}
   				for(int k = 0;h>=k;k++)
   				{
   					final_top.push_back(vec[k]);
   				}
   				cout << h << " ";
   				


   	int d = 0;
   	for(auto it : final_top) cout << it << " ";
   		cout << endl;
   	for(int i = 1;n>i;i++)
   	{
   		if(final_top[i] < final_top[i-1])
   		{
   			d += k-final_top[i-1];
   			d += final_top[i];
   		}
   		else
   			d+=final_top[i] - final_top[i-1];
   		

   	}



   	cout << d << endl;


   	




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




