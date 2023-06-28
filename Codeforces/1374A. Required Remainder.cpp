#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll x, y, n, M, dif;
        cin >> x >> y >> n;
        M = (n%x);
        if(n<x)
        {
            cout << y << endl;
        }
        else if(M==y)
        {
            cout << n << endl;
        }
        else if(y>M)
        {
            dif = y-M;
            cout << n-x+dif << endl;
        }
        else if(M>y)
        {
            dif = M-y;
            cout << n-dif << endl;
        }
    }
    return 0;
}
