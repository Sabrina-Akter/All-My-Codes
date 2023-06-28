#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t, n, i;
    cin >> t;
    while(t--)
    {
        ll o=0, e=0, x;
        cin >> n;
        for(i=0;i<2*n;i++)
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
        if(o==e)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
