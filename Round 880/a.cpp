
#include <bits/stdc++.h>

using namespace std;
#define fr freopen("in.txt","r",stdin);freopen("outi.txt","w",stdout);
#define mxn 999999999
#define mnn -mxn
#define int long long
#define endl "\n"
#define mod  998244353
#define all(x) x.begin(),x.end()

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

void solve()
{
   int n;
   cin >> n;

   map<int,int> mp;
   for(int i=0;n>i;i++)
   {
   	 int x;
   	 cin >> x;
   	 mp[x]++;
   }

   for(auto it:mp)
   {
   	if(it.first == 0) continue;
   	if(it.second > mp[it.first-1])
   	{
   		cout << "NO" << endl;
   		return;
   	}
   }
   cout << "YES" << endl;
 

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




