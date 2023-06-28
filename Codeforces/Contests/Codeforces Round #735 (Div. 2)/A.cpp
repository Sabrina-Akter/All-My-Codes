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
        ll n, i, Max=-10000000, Min_Max=-10000000, mx, mn, Max_prod=-10000000;
        cin >> n;
        ll A[n];
        for(i=0;i<n;i++)
        {
            cin >> A[i];
            if(i!=0)
            {
                ll prod = A[i]*A[i-1];
                Max_prod=max(Max_prod, prod);
            }
        }
        cout << Max_prod << endl;
    }
    return 0;
}
