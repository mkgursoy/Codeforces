#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("O3,fast-math,inline")
#include <bits/stdc++.h>
#include<unordered_map>

using namespace std;
#define fr freopen("in.txt","r",stdin);freopen("outi.txt","w",stdout);
#define mxn 999999999
#define mnn -mxn
#define int long long
#define endl "\n"
#define mod 1000000007


void solve()
{
    int n,k,q;
    cin >> n >> k >> q;
    vector<int> vec;
    int cvp = 0;
    vec.push_back(0);
    for(int i=0;n>i;i++)
    {
        int x;
        cin >> x;
        
        if(x>q)
        {
            vec.push_back(0);
            continue;
        }
        vec.back()++;
        
    }
    cvp = 0;
    for(int i=0;vec.size()>i;i++)
    {
        
    
        int tmp = 0;
        //cout << vec[i] << " ";
        for(int j = k;vec[i]>=j;j++) tmp+=vec[i]-j+1;

            cvp+=tmp;

    }

    cout << cvp<< endl;
    
}


//

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



