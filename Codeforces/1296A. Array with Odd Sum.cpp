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
        ll n, i, o=0, e=0, x;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            if(x%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        if(o==0)
        {
            cout << "NO" << endl;
        }
        else if(e==0)
        {
            if(o%2==0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
