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
        ll n, ans=0;
        cin >> n;
        while(1)
        {
            if(n/5==0)
            {
                break;
            }
            else
            {
                ans+=n/5;
                n/=5;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
