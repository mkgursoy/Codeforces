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
int sieve[100];

void solve()
{
   int n,k,x;
   cin >> n >> k >> x;
   if(x== 1)
   {
   		if(k == 1)
   		{
   			 cout << "NO" << endl;
   			 return;
   		}
   		if(n%2 == 0)
   		{
   			cout << "YES" << endl << n/2 << endl;
   			for(int i=0;n/2>i;i++)
   			{
   				cout << "2 ";
   			}
   			cout << endl;
   			return;
   		}
   		else
   		{
   			if(k ==2 )
   			{
   				 cout << "NO" << endl;
   			 return;
   			}
   			cout << "YES" << endl << n/2 << endl;
   			for(int i=0;n/2-1>i;i++)
   			{
   				cout << "2 ";
   			}
   			cout << "3 "<< endl;
   			return;
   		}

     cout << "NO" << endl;
   }
   cout << "YES" << endl << n << endl;
   for(int i=0;n>i;i++) cout << "1 ";
   	cout << endl;

}



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	//fr
	memset(sieve,0,sizeof(sieve));
	

	int t;
	t=1;
	cin >> t;

	while(t--) solve();

}


//template




