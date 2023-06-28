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
        ll n, a, b;
        cin >> n;
        a = n-1;
        b = a/2;
        cout << b << " " << a << endl;
    }
    return 0;
}
