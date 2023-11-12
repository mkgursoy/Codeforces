/*
    Author:Matkap(prefixsumenjoyer23)
    
*/

#include <bits/stdc++.h>

using namespace std;
#define fr freopen("/Users/metinkasim/Documents/in.txt","r",stdin);freopen("/Users/metinkasim/Documents/out.txt","w",stdout);


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
   	int n,q;
   	cin >> n >> q;
   	int ar[n];
   	int x[q];
   	vector<int> x_fin;
   	for(int i = 0;n > i;i++) cin >> ar[i];
   	for(int i = 0;q > i;i++) cin >> x[i];

   	int mn = x[0];
   	x_fin.push_back(x[0]);
  	for(int i = 1;q > i;i++)
   	{
   		if(x[i] < mn) mn = x[i],x_fin.push_back(x[i]);
   	}


   	q = x_fin.size();
   	reverse(all(x_fin));

   	int pref[q];

   	pref[0] = binpow(2,x_fin[0]-1);


   	for(int i = 1;q>i;i++) pref[i] = pref[i-1] + binpow(2,x_fin[i]-1);

   	for(int i = 0;n > i;i++)
   	{
   		int temp = 0;
   		for(int j = 0;q > j;j++)
   		{

   			if(ar[i] % binpow(2,x_fin[j]) != 0)
   			{
   				temp--;
   				break;
   			}

   			temp++;
   		}

   		if(temp == q) temp--;


   		if(temp >= 0)
   		{
   			ar[i] += pref[temp];
   		}
   	}

   	for(auto it : ar) cout << it << " ";
   		cout << endl;




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


