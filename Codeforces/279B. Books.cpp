#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, t, i, sum=0, mx=0, f, x;
    cin >> n >> t;
    deque <ll> d;
    for(i=0;i<n;i++)
    {
        cin >> x;
        d.push_back(x);
        sum+=x;
        while(1)
        {
            if(sum>t)
            {
                f = d.front();
                d.pop_front();
                sum-=f;
            }
            else
            {
                if(d.size()>mx)
                {
                    mx = d.size();
                }
                break;
            }
        }
    }
    cout << mx << endl;
    return 0;
}
