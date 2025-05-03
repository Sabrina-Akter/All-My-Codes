#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
const char nl = '\n';

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        priority_queue <double> pq;
        for(double i = 0; i < n; i++)
        {
            pq.push(i + 1);
        }
        double a, b, c;
        vector <pair<double, double>> ans;
        while(pq.size() >= 2)
        {
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            ans.push_back({a, b});
            c = ceil((a + b) / 2);
            pq.push(c);
        }
        cout << pq.top() << nl;
        for(auto &it : ans) cout << it.first << " " << it.second << nl;
    }
    return 0;
}