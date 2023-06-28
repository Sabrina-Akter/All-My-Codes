#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n%2==0)
        {
            cout << n/2 << endl;
        }
        else
        {
            cout << ((n+1)/2) << endl;
        }
    }
    return 0;
}
