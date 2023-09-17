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
   	char mat[3][3];
   	for(int i = 0;9>i;i++) cin >> mat[i/3][i%3];


   		char a = mat[0][0];
   		char b = mat[0][2];

   		bool f = true;
   		bool f1 = true;


   		for(int i = 0;3>i;i++)
   		{
   			if(mat[i][0] == mat[i][1] && mat[i][1] == mat[i][2] && mat[i][0] != '.')
   			{
   				cout << mat[i][0] << endl;
   				return;
   			}
   			if(mat[0][i] == mat[1][i] && mat[1][i] == mat[2][i] && mat[0][i] != '.')
   			{
   				cout << mat[0][i] << endl;
   				return;
   			}

   			if(a != mat[i][i]) f = false;
   			if(b != mat[i][2-i]) f1 = false;


   			a = mat[i][i];
   			b = mat[i][2-i];

   		}

   		if(f && a != '.') cout << mat[0][0] << endl;
   		else if(f1 && b != '.') cout << mat[0][2] << endl;
   		else
   			cout << "DRAW" << endl;


}



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//	fr

	int t;
	t=1;
	cin >> t;
	while(t--) solve();

}


//template




