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
        ll n, m, a, b, c, d, i, flag=0;
        cin >> n >> m;
        for(i=1; i<=n; i++)
        {
            cin >> a >> b >> c >> d;
            if(b==c)
            {
                flag=1;
            }
        }
        if(flag==0 || m%2!=0)
        {
            cout << "NO" << endl;
        }
        else if(flag==1 && m%2==0)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
