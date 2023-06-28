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
        ll n, k, i, sum=0, Max=0, x;
        cin >> n >> k;
        for(i=0;i<n;i++)
        {
            cin >> x;
            sum+=(x-k);
            Max=max(sum, Max);
            if(sum<=0)
            {
                sum=0;
            }
        }
        cout << Max << endl;
    }
    return 0;
}
