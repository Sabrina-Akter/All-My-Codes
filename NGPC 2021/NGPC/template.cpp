#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <long long int>
#define pb push_back
#define nl endl
int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll C;
        double w, h, a, b, c;
        cin >> w >> h;
        a = w/2;
        b = h/2;
        c = a-b;
        C = a-b;
        if(C==c)
        {
            cout << C << nl;

        }
        else
        {
            cout << fixed << setprecision(4) << c << nl;
        }
    }
    return 0;
}