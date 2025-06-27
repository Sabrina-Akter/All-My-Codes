#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
const char nl = '\n';

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, x, i;
        cin >> n >> x;
        vll v(n);
        for(i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool done = false, ans = true;
        for(i = 0; i < n; i++)
        {
            if(v[i] == 1)
            {
                if(done == false)
                {
                    i += x - 1;
                    done = true;
                }
                else
                {
                    ans = false;
                    break;
                }
            }
        }
        if(ans) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
    return 0;
}