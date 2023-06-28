#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        ll i, f;
        deque <ll> d;
        for(i=1;i<=n;i++)
        {
            d.pb(i);
        }
        vll v;
        while(1)
        {
            if(d.size()==0)
            {
                break;
            }
            f=d.front();
            v.pb(f);
            d.pop_front();
            f=d.front();
            d.pop_front();
            d.pb(f);
        }
        cout << "Discarded cards:";
        for(i=0;i<v.size()-1;i++)
        {
                if(i==0)
                {
                    cout << " " << v[i];
                }
                else
                {
                    cout << ", " << v[i];
                }
        }
        cout << endl;
        cout << "Remaining card: " << v[v.size()-1] << endl;
    }
    return 0;
}
