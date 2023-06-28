#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 100000

int main()
{
    fastt;
    ll a, b, LCM, GCD, c, d, t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        c = __gcd(a,b);
        d = (a*b)/c;
        GCD = __gcd(c,d);
        LCM = (c*d)/GCD;

        if(a==GCD && b==LCM)
        {
            cout << c << " " << d << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
