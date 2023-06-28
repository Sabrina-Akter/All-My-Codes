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
    ll t, a, b, i;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << a - 1 << endl;
        for(i=1;i<=a;i++)
        {
            if(i==b)
            {
                continue;
            }
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
