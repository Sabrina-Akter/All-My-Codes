#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

int main()
{
    fastt;
    ll i, t, n, first, last, x, y;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll c1=0, c2=0, A[n];
        set <ll> s;
        for(i=0;i<n;i++)
        {
            cin >> A[i];
            if(i==0)
            {
                first = A[i];
                c1++;
                x = i;
            }
            else
            {
                if(first!=A[i])
                {
                    last = A[i];
                    c2++;
                    y = i;
                }
                else
                {
                    c1++;
                }
            }
        }
        if(c1==1)
        {
            cout << x+1 << endl;
        }
        else if(c2==1)
        {
            cout << y+1 << endl;
        }
    }
    return 0;
}
