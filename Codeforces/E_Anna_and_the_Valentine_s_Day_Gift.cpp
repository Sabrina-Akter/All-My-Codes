#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, a;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<int> reductions(n);
        for (auto &reduction: reductions) {
            cin >> a;
            while (a % 10 == 0) {
                a /= 10;
                reduction++;
            }
            m -= to_string(a).length();
        }
        
        ranges::sort(reductions, greater<>());
        for (int i = 1; i < n; i += 2) {
            m -= reductions[i];
        }
        
        cout << (m >= 0 ? "Anna\n" : "Sasha\n");
    }
    return 0;
}
