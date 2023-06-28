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
        ll n, i, sum=0, a;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> a;
            sum+=a;
        }
        if(sum==n)
        {
            cout << 0 << endl;
        }
        else if(sum>n)
        {
            cout << sum-n << endl;
        }
        else if(sum<n)
        {
            cout << 1 << endl;
        }
    }
    return 0;
}
