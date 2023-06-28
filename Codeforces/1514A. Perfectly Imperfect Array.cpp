#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 100000


int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, x, i, l, flag=0;
        double d;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            l = sqrt(x);
            d = sqrt(x);
            if(l!=d)
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
