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
        ll n, i, x, sum=0;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            sum+=x;
        }
        if(sum%n==0)
        {
            cout << sum/n << endl;
        }
        else
        {
            cout << (sum/n)+1 << endl;
        }
    }
    return 0;
}
