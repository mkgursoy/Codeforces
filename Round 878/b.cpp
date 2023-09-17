#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
#define fr freopen("in.txt","r",stdin);freopen("outi.txt","w",stdout);
#define mxn 999999999ll
#define mnn -mxn
#define int long long
#define endl "\n"
#define mod  998244353
//1 1 3 4
//2y
/*
    1 4
    3 1
*/
int pow1[33];

void solve()
{
    int n,k;
    cin >> n >> k;
    if(k>32) k=32;
    if(n>=pow1[k])
    {

        cout << pow1[k] << endl;
        return;
    }
     

    int cvp = 0;
    while(n > 0)
    {
        int ab = upper_bound(pow1,pow1+32,n)-pow1;
        
        cvp+=pow1[ab-1];
        n-=pow1[ab-1];
    }
    cout << cvp+1 << endl;

}


int32_t main()
{
    pow1[0] = 1;
      for(int i=1;33>i;i++) pow1[i] = pow1[i-1]*2;

    //fr

    int t;
    t=1;
    cin >> t;
    while(t--) solve();

}


//template




