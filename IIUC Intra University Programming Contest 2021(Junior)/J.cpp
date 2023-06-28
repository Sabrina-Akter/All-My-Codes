#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
    ll t, i, j, n, cnt, flg, m, x, y, k;
    cin >> t;
    while (t--) {
        cin >> x >> y >> k;
        vector<ll> v;
        n = x - k;
        m = y - k;
        cnt = __gcd(m, n);
        for (i = 1; i * i <= cnt; i++) {
            ll temp = cnt / i;
            if (cnt % i == 0 && n % i == 0 && m % i == 0) {
                if (i > k) {
                    v.push_back(i);
                } else if (temp > k && n % temp == 0 && m % temp == 0) {
                    v.push_back(temp);
                }
            }
        }
        cout << v.size() << endl;
        if(!v.empty()) {
            sort(v.begin(), v.end());
            for (i = 0; i < v.size(); i++)
                cout << v[i] << " ";
            cout << endl;
        }
    }
}
