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
int findMinCountToReachSum(int sum, vector<int>components)
{
     
    // numWays[i] represent number of ways to build value i efficiently
    // using provided components.
    vector<int>numWays(sum+1,0);
     
    for(int i = 1; i <= sum; i++) {
        numWays[i] = INT_MAX;  // First start with a invalid value.
        // Try to improve the value using given components.
        for(int j=0; j<components.size(); j++) {
             
            // component c can only contribute in building number i, if it is
            // less than or equal to number i.
            if(i >= components[j]) {
                 
                // Check if component c can be utilized to build number i in
                // a better way.
                numWays[i] = min(numWays[i], numWays[i-components[j]] + 1);
            }
        }
    }
     
    return numWays[sum];
}

int lcm(int a,int b)
{
	return (a*b)/gcd(a,b);
}

void solve()
{
   	int n;
   	string s;
   	cin >> s;
   	int temp = 0;
   	n = s.size();
   	int k = 0;
   	pair<int,int> pre[n];
   	pair<int,int> suf[n];

   	vector<pair<int,int>> par;
   	vector<pair<int,int>> sar;
   	pre[0].first = 0;
   	pre[0].second = 0;
   	suf[n-1].first = 0;
   	suf[n-1].second = 0;
   	for(int i = 0;n>i;i++)
   	{
   		if(i) pre[i] = pre[i-1];

	
   		pre[i].first += (s[i]=='0');
   		pre[i].second += (s[i]=='1');


   	}
   
   	for(int i = n-1;i>=0;i--)
   	{
   		if(i < n-1) suf[i] = suf[i+1];

   		suf[i].first += (s[i]=='0');
   		suf[i].second += (s[i]=='1');
   	}
   	int temp1 = 0;
   	for(int i = 0;n>i;i++)
   	{
   	
   		if(s[i] == '1') 
   			{
   				k++;
   				temp = temp + pre[i].first;
   				temp1 = temp1 + suf[i].first;
   				
   				sar.push_back(suf[i]);
   				par.push_back(pre[i]);

   			}
   		
   	}

   	temp -= temp1;
  // 	cout << temp << endl;
   	
   if(temp == 0) cout << "0" << endl;

   else	if(temp < 0)
   	{
   		temp *= -1;
   		vector<int> cev;
   		cout << findMinCountToReachSum


   	}
   	else
   	{
   		vector<int> cev;
   		
   		

   		for(int i = 0;par.size() > i;i++) 
   		{
   			cev.push_back(par[i].first + (k-sar[i].second));
   			
   		}
   		sort(all(cev),greater<int>());
   		for(int i = 0;cev.size() > i;i++) 
   		{
   			
   			temp -= cev[i];
   			if(temp <= 0)
   			{
   				cout << i+1 << endl;
   				return;
   			} 
   		}
   
   	}


}



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//	fr

	int t;
	t=1;
	//cin >> t;
	while(t--) solve();

}


//template




