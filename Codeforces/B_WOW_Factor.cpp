#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

int main()
{
    fastt;
    string s1;
    cin >> s1;

    ll n = s1.size();
    vector<ll> w_prefix(n, 0);
    ll w_count = 0;

    for (int i = 1; i < n; i++) {
        if (s1[i] == 'v' && s1[i - 1] == 'v') {
            w_count++;
        }
        w_prefix[i] = w_count;
    }

    ll total_w = w_count;
    ll result = 0;

    for (int i = 0; i < n; i++) {
        if (s1[i] == 'o') {
            ll left_w = w_prefix[i];
            ll right_w = total_w - w_prefix[i];
            result += left_w * right_w;
        }
    }

    cout << result << '\n';
    return 0;
}
