#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, l, r, i, sum=0, mod_l, mod_r;
        cin >> n >> l >> r;
        mod_l = l%n;
        if(mod_l==0)
        {
            mod_l = n;
        }
        mod_r = l%n;
        if(mod_r==0)
        {
            mod_r = n;
        }
        ll A[n];
        ll B[n];
        for(i=0;i<n;i++)
        {
            cin >> A[i];
            sum = sum+A[i];
            B[i] = sum;
            cout << B[i] << endl;
        }
    }
    return 0;
}
