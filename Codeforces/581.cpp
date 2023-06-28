#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll a, b, c, d;
    cin >> a >> b;
    c = min(a, b), d = max(a, b);
    d = d-c;
    cout << c << " ";
    if(d==1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << d/2 << endl;
    }
    return 0;
}
