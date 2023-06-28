#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll t, i, j, n, k, c;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> n;
        double a[n + 55];
        for (j = 0; j < n; j++) {
            cin >> a[j];
            // cout << a[j] << endl;
        }
        sort(a, a + n);
        double p, aa, mn = (double) INT64_MAX;
        ll f = 1;
        for (int i = 0; i < n - 2; ++i) {
        int k = i + 2;
        for (int j = i + 1; j < n; ++j) {
            while (k < n && a[i] + a[j] > a[k])
                ++k;
            if (k > j)
                count += k - j - 1;
        }
        }
        if (mn == (double) INT64_MAX)
            cout << "-1" << endl;
        else
            cout << fixed << setprecision(10) << mn << endl;
    }

    return 0;
}
