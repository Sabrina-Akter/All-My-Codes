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
        double n, i, x, sum=0, mx=-1000000000000;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            mx = max(x, mx);
            sum+=x;
        }
        sum=(sum)-(mx);
        double d = sum/(n-1);
        d = d+mx;
        cout << fixed << setprecision(9) << d << endl;
    }
    return 0;
}
