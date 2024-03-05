#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)
#define pll pair<ll,ll>
#define plll pair<pll,ll>

const int MOD = 1000000007;
const char nl = '\n';

int main()
{
    fastt;
    ll n;
    cin >> n;
    vll v(n);
    priority_queue <int> pq;
    ll sum = 0;
    ll cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] < 0) pq.push(abs(v[i]));
        sum += v[i];
        cnt++;
        if(sum < 0)
        {
            while(1)
            {
                if(pq.size() > 0)
                {
                    sum += pq.top();
                    pq.pop();
                    cnt--;
                }
                if(sum >= 0) break;
            }
        }
    }
    cout << cnt << nl;
    return 0;
}