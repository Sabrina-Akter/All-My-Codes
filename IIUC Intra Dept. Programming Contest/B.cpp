#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    string s;
    cin >> s;
    ll n, j;
    n = s.size();
    ll a[200];
    memset(a, 0, sizeof(a));
    for (j = 0; j < n; j++) {
        a[s[j] - 'a']++;
    }
    ll sum = 0, cc = 0;
    for (j = 0; j < 26; j++) {
        if (a[j] > 0 && a[j] % 2 == 0)
            sum += a[j];
        else if (a[j] > 0 && a[j] % 2 == 1) {
            cc++;
            sum += (a[j] - 1);
        }
    }
    if (cc)
        sum++;
    cout << sum << endl;
}
