/*
    Author:Matkap(prefix_sum)
    
*/
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
    int m;
    cin >> m;
    int n;
    cin >> n;
    __int128 ind[m];
    int op[m];
    int ar[m];
    __int128 cur_size = 0;


    for(int i = 0;m>i;i++)
    {
        cin >> op[i];

        if(op[i] == 1)
        {
            int x;
            cin >> x;
            ind[i] = 1;
            ar[i] = x;
            cur_size++;
        }
        else
        {
            int l,x;
            cin >> x;
            ind[i] = cur_size*x;

            ar[i] = cur_size;
            if(cur_size + ind[i] >= 1000000000000000000) cur_size = 1000000000000000000;
            else cur_size += ind[i];


        }


        if(i > 0) ind[i] += ind[i-1];
    }

   
    while(n--)
    {
        int k;
        cin >> k;
        int index = lower_bound(ind,ind+m,k) - ind;
        
        

        while(op[index] != 1)
        {
            k = (k - ind[index-1] - 1)%ar[index] + 1;

            index = lower_bound(ind,ind+m,k) - ind;

            //cout << index << " ";

        }
        //cout << endl;
        cout <<  ar[index] << " ";
    }
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


//template



