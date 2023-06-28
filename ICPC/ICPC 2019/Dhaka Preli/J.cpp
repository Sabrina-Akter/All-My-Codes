#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(i,x,y) for(ll i=x;i<=y;i++)
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t, n, i, x, c=0;
    cin >> t;
    while(t--)
    {
        c++;
        cin >> n;
        vll v;
        for(i=0;i<n;i++)
        {
            cin >> x;
            v.pb(x);
        }
        sort(v.begin(),v.end());
        cout << "Case " << c << ": " << ((*min_element(v.begin(),v.end()))*(*max_element(v.begin(),v.end()))) << endl;
    }
    return 0;
}
