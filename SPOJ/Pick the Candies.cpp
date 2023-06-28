#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k, i, j, x, f, mf;
        cin >> n >> k;
        deque <ll> d;
        multiset <ll> m;
        for(i=0;i<n;i++)
        {
            cin >> x;
            m.insert(x);
            d.pb(x);
            if(i>=k)
            {
                f = d.front();
                d.pop_front();
                auto it = m.end();
                it--;
                if(f==(*it))
                {
                    m.erase(it);
                }
            }
            if(i>=(k-1))
            {
                auto it=m.end();
                it--;
                cout << *it << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
