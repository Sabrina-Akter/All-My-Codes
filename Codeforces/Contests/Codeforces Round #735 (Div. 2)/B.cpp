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
        ll n, k, i, prod, p, p2, Max = -10000000000;
        cin >> n >> k;
        ll A[n];
        for(i=0;i<n;i++)
        {
            cin >> A[i];
            if(i!=0)
            {
                prod = (i+1)*(i);
                unsigned char x=A[i], y=A[i-1];
                ll OR = x | y;
                p = k*OR;
                p2 = prod-p;
                Max = max(Max, p2);
            }
        }
        cout << Max << endl;
    }
    return 0;
}
