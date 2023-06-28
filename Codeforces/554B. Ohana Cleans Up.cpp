#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    map <string, ll> m;
    ll i, n, MAX=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        string s;
        cin >> s;
        m[s]++;
        MAX = max(MAX, m[s]);
    }
    cout << MAX << endl;
    return 0;
}
