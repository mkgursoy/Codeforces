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

void solve()
{
   	int n;
   	cin >> n;
   	int ar[n];

   	for(int i = 0;n > i;i++) cin >> ar[i];

   	int pref[n][31];
   memset(pref,0,sizeof(pref));

   	for(int i = 0;31 > i;i++)
   	{

   		if((ar[0] & (1 << i)) != 0) continue;

   		pref[0][i]++;
   	}

   	for(int i = 1;n > i;i++)
   	{
   		for(int j = 0;31 > j;j++)
   		{
   			pref[i][j] = pref[i-1][j];
   			if((ar[i] & (1 << j)) != 0) continue;

   			pref[i][j]++;
   		}
   	}

   	
   	
   	int q;
   	cin >> q;
   	while(q--)
   	{
   		int l,k;
   		cin >> l >> k;
   		l--;
   		
   		if(ar[l] < k)
   		{
   			cout << "-1 " << endl;
   			continue;
   		}
   		int r1 = n;
   		int l1 = l;
   		int ans = l;
   		int sum = 0;
   		while(r1 > l1)
   		{
   			int mid = (l1+r1)/2;
   			sum = 0;
   			//cout << l1 << "  " << r1 << endl; 
   			
   			

   			
   			for(int i = 0;31 > i;i++)
   			{
   				if(l > 0)
   				{
   					
   					if(pref[mid][i] - pref[l-1][i] == 0) sum += (1 << i);
   				}		
   				else
   				{
   					
   					if(pref[mid][i] == 0) sum += (1 << i);

   				}
   				
   			}
   			

   			if(sum >= k) l1 = mid+1,ans = max(ans,mid);
   			else
   				r1 = mid;
   			

   		}


   		cout << ans+1 << endl;
   	}
  
   
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


//template




