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
        for (j = 0; j < n - 2; j++) {
            for (k = j + 1; k < n - 1; k++) {
                for (ll l = k + 1; l < n; l++) {
                    // cout << a[j] << " " << a[k] << " " << a[l] << endl;
                    if (a[j] + a[k] > a[l] && a[j] + a[l] > a[k] && a[k] + a[l] > a[j]) {
                        p = (a[j] + a[k] + a[l]) / 2;
                        //cout << p << endl;
                        aa = sqrt(p * (p - a[j]) * (p - a[k]) * (p - a[l]));
                        mn = min(aa, mn);
                    }
                }
            }
        }
        if (mn == (double) INT64_MAX)
            cout << "-1" << endl;
        else
            cout << fixed << setprecision(10) << mn << endl;
    }

    return 0;
}
