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
char ar[50][50];
int visited[50][50];
int low[50][50];
int disc[50][50];
bool check(int x,int y,int n,int m)
{
	if(n > x && x >= 0 && m > y && y >= 0 && ar[x][y] != '.') return true;
	else
	return false;
}
int timer = 0;
void matrixbfs(int pos1,int pos2,int n,int m,int parent)
{
	disc[pos1][pos2] = low[pos1][pos2] = timer++;
	memset(visited,0,sizeof(visited));
	queue<pair<int,int>> que;

	que.push({pos1,pos2});
	visited[pos1][pos2]++;

	while(!que.empty())
	{
		pair<int,int> pivot = que.front();
		que.pop();
		
		if(visited[pivot.first+1][pivot.second] == 0 && check(pivot.first+1,pivot.second,n,m))
		{
				visited[pivot.first+1][pivot.second] = 1;
				que.push({pivot.first+1,pivot.second});
		}
		if(visited[pivot.first-1][pivot.second] == 0 && check(pivot.first-1,pivot.second,n,m))
		{
				visited[pivot.first-1][pivot.second] = 1;
				que.push({pivot.first-1,pivot.second});
		}
		if(visited[pivot.first][pivot.second+1] == 0 && check(pivot.first,pivot.second+1,n,m))
		{
				visited[pivot.first][pivot.second+1] = 1;
				que.push({pivot.first,pivot.second+1});
		}
		if(visited[pivot.first][pivot.second-1] == 0 && check(pivot.first,pivot.second-1,n,m))
		{
				visited[pivot.first][pivot.second-1] = 1;
				que.push({pivot.first,pivot.second-1});
		}
			
		
	}	

	

}
void solve()
{
   	int n,m;
   	cin >> n >> m;
   	memset(visited,0,sizeof(visited));
   	memset(low,0,sizeof(low));
   	memset(disc,0,sizeof(disc));

   	for(int i = 0;n>i;i++)
   	{
   		for(int j = 0;m>j;j++)
   		{
   			cin >> ar[i][j];
   		}
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




