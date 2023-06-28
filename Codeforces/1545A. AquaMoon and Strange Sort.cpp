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
        ll n, i, flag=0;
        map <ll, ll> odd1, even1, odd2, even2;
        cin >> n;
        vll v1(n), v2(n);
        for(i=0;i<n;i++)
        {
            cin >> v1[i];
            if(i%2==0)
            {
                even1[v1[i]]++;
            }
            else
            {
                odd1[v1[i]]++;
            }
            v2[i] = v1[i];
        }
        sort(v2.begin(), v2.end());
        for(i=0;i<v2.size();i++)
        {
            if(i%2==0)
            {
                even2[v2[i]]++;
            }
            else
            {
                odd2[v2[i]]++;
            }
        }
        for(i=0;i<v2.size();i++)
        {
            ll a=odd1[v2[i]], b=odd2[v2[i]], c=even1[v2[i]], d=even2[v2[i]];
            if((a!=b) || (c!=d))
            {
                flag=1;
                cout << "NO" << endl;
                break;
            }
        }
        if(flag==0)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
