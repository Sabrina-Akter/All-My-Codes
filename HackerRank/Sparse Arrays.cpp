#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    ll n, q;
    string s;
    map <string, ll> m;
    cin >> n;
    while(n--)
    {
        cin >> s;
        m[s]++;
    }
    cin >> q;
    while(q--)
    {
        cin >> s;
        cout << m[s] << endl;
    }
    return 0;
}
