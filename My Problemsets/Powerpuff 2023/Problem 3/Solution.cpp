#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, b, s;
        cin >> n >> b >> s;

        bool available = false;
        for (int i = 0; i < b; i++) {
            int taken_seats;
            cin >> taken_seats;
            if (s - taken_seats >= n) {
                available = true;
            }
        }

        if (available) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
