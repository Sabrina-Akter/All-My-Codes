#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, ans;
        cin >> n;
        ans = n/10;
        if(n%10==9)
        {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
