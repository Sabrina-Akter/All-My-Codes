#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        string t;
        cin >> t;

        int count0 = 0, count1 = 0;
        for (char c : t) {
            if (c == '0') {
                count0++;
            } else {
                count1++;
            }
        }

        if (count0 == 0 || count1 == 0) {
            cout << t << endl;
        } else {
            string result = "";
            for (int j = 0; j < t.length(); ++j) {
                result += "01";
            }
            cout << result << endl;
        }
    }

    return 0;
}