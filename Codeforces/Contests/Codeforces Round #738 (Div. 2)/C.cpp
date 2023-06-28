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
        ll n, i, x=0, flag=0;
        cin >> n;
        ll A[n];
        for(i=0;i<n;i++)
        {
            cin >> A[i];
        }
        for(i=0;i<=n;i++)
        {
            if(A[i]==1 && flag==0)
            {
                cout << n+1 << " ";
                flag=1;
            }
            else
            {
                x++;
                cout << x << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
