#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("testcase input 5.txt", "r", stdin);
    freopen("testcase output 5.txt", "w", stdout);
    long long t;
    while(cin>> t) {
        while(t--)
        {
            long long n, i, sum1 = 0, sum2 = 0, mx = LONG_LONG_MIN;
            cin >> n;
            vector<long long> v1(n), v2(n);
            map<long long, long long> m, m2;
            for (i = 0; i < n; i++)
            {
                cin >> v1[i] >> v2[i];
                sum1 += v1[i];
                sum2 += v2[i];
                mx = max(sum1, mx);
                m2[sum1]++;
                if (sum2 > m[sum1])
                {
                    m[sum1] = sum2;
                }
                if (sum1 < 0)
                {
                    sum1 = 0;
                    sum2 = 0;
                }
            }
            cout << mx << " " << m[mx] << endl;
        }
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}