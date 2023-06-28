#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define endl "\n"

int main()
{
    fastt;
    ll i, sum=0,t, n, k, x, y, z;
    vll v;
    for(i=1;i<=100000;i++)
    {
        sum+=i;
        v.pb(sum);
    }
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        auto it=lower_bound(v.begin(),v.end(),k);
        x = (it-v.begin()+2);
        x = n-x;
        y = *it;
        z =(it-v.begin())-(y-k);
        z = n-z-1;
        for(i=0;i<n;i++)
        {
            if(i==x || i==z)
            {
                cout << "b";
            }
            else
            {
                cout << "a";
            }
        }
        cout << endl;
    }
    return 0;
}
