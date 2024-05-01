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
//b * gcd(a,b) = k * (a + b) then b * gcd(a, b) is divisible by (a + b) (nice observation)
//gcd(a , b) = lcm(a , b) / ((a) * b)
//lcm(a , b) = (a + b) ^ 2 * k
//b should be a multiple of (a + b) but thats just simply impossible :(
//Why isnt it possible
//Its just not
//Why not?
//Because gcd(a , b) = lcm(a , b) / ((a) * b) isnt true
//gcd(a, b) = ((a) * b) / lcm(a , b) is true
//b ^ 2 / lcm(a, b) = k
//b ^ 2 = lcm(a, b) * k
//b ^ 2 is divisible by lcm(a, b)
//b ^ 2 = k * gcd(a * b, b/(2 * l))
//uhh a = i * gcd(a,b) , b = j * gcd(a,b), if i and j are coprime then a and b exist
void solve()
{
   	int n,m;
   	cin >> n >> m;
   	int ans = 0;
   	for(int i = 1;n >= i * i;i++)
   	{
   		for(int j = 1;m >= j * j;j++)
   		{
   			if(gcd(i,j) == 1) ans += min((n / (i + j) / i) , (m / (i + j) / j));
   		}
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