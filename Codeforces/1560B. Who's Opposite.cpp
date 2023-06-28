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
        ll a, b, c, half, full, mn, mx;
        cin >> a >> b >> c;
        mn = min(a,b);
        mx = max(a,b);
        half = abs(a-b);
        full = 2*half;
        if((c>full) || (mx<(2*mn)))
        {
            cout << "-1" << endl;
        }
        else
        {
            if((c+half)>full)
            {
                cout << c-half << endl;
            }
            else
            {
                cout << c+half << endl;
            }
        }
    }
    return 0;
}
