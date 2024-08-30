#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector<ll>

const char nl = '\n';

int main() 
{
    fastt;
    ll t;
    cin >> t;
    while (t--) 
    {
        ll n, k;
        cin >> n >> k;
        vll v(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        bool yes = false;
        int i = 0, j = 1;
        while (j < n) {
            if (v[j] - v[i] == k) 
            {
                yes = true;
                break;
            } else if (v[j] - v[i] < k) 
            {
                j++;
            } else 
            {
                i++;
                if (i == j) j++;
            }
        }

        if (yes) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
    return 0;
}

