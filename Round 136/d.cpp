/*
    Author:Matkap(prefixsumenjoyer23)
    
*/
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("O3,fast-math,inline")
#include <bits/stdc++.h>
#include<array>

using namespace std;
#define fr freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);


#define int long long
#define endl "\n"
#define mod  998244353
#define all(x) x.begin(),x.end()

int mxn = 1e18;
int mnn = -mxn;
const int N = (int)1e5+7;

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
const int sH = 400;
bool algo(array<int,3> x,array<int,3> y)
{

	if(x[0]/sH < y[0]/sH) return true;
	if(y[0]/sH < x[0]/sH) return false;

	return x[2] <= y[2];

}
void solve()
{
   	int n,q;
   	cin >> n >> q;
   	int ar[n];
   	for(int i = 0;n>i;i++) cin >> ar[i];

   	vector<array<int,3>> queries;

   	for(int i = 0;q > i;i++)
   	{
   		int l,r;
   		cin >> l >> r;
   		l--;
   		r--;

   		queries.push_back({l,r,i});
   	}
   	int freq[N];
   	int cvp = 0;
   	for(int i = 0;n>i;i++)
   	{
   		if(ar[i] < N)
   		freq[ar[i]] = 0;
   	} 
   	sort(all(queries),algo);
   	int r = -1;
   	int l = 0;
   	

   	int cvp1[q];
   	for(int i = 0;q > i;i++)
   	{
   		
   		while(r > queries[i][1])
   		{
   			if(ar[r] < N)
   			{
   				if(freq[ar[r]] == ar[r]) cvp--;
   				freq[ar[r]]--;
   				if(freq[ar[r]] == ar[r]) cvp++;
   			}
   			
   			
   			r--;
   			
   			
   			

   		}
   		while(r < queries[i][1])
   		{
   			

   			
   			r++;
   			if(ar[r] < N)
   			{
   				if(freq[ar[r]] == ar[r]) cvp--;
   			freq[ar[r]]++;
   			if(freq[ar[r]] == ar[r]) cvp++;
   			}
   			
   			
   			
   		}
   		while(l > queries[i][0])
   		{
   		
   			
   			l--;
   			if(ar[l] < N)
   			{
   				if(freq[ar[l]] == ar[l]) cvp--;
   			freq[ar[l]]++;
   			if(freq[ar[l]] == ar[l]) cvp++;
   			}
   			
   			
   			
   		}
   		
   		
   		while(l < queries[i][0])
   		{
   			if(ar[l] < N)
   			{
   				if(freq[ar[l]] == ar[l]) cvp--;
   				freq[ar[l]]--;
   				if(freq[ar[l]] == ar[l]) cvp++;
   			}
   			
   			l++;
   		
   		}
   		cvp1[queries[i][2]] = cvp;

   	}

   	for(auto it : cvp1) cout << it << endl;


   	
}



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	//fr

	int t;
	t=1;
	//cin >> t;
	while(t--) solve();

}


//template



