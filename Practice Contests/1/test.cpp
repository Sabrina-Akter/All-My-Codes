#include <bits/stdc++.h>

#define ll long long int
using namespace std;

ll front_check(ll n) {
    if (n % 2 == 0)
        n--;
    return n;
}

ll back_check(ll n) {
    if (n % 2 == 0)
        n++;
    return n;
}

int main() {
    ll n, m, i, j, a, b;
    cin >> n >> m;
    n++;
    vector<pair<int, int>> p, ans;
    ll temp = 1;
    for (i = 0; i < m; i++) {
        cin >> a >> b;
        if (a != b)
            p.emplace_back(make_pair(a, b));
    }
    if (p.size() == 0)
        cout << "1 " << n << endl;
    else {
        sort(p.begin(), p.end());
        ans.emplace_back(make_pair(front_check(p[0].first), back_check(p[0].second)));
        ll q = 0;
        for (i = 1; i < p.size(); i++) {
            if (p[i].first > ans[q].second) {
                ans.emplace_back(make_pair(front_check(p[i].first), back_check(p[i].second)));
                q++;
            } else {
                if ((p[i].first == ans[q].second) && (p[i].second > ans[q].second))
                    ans[q].second = back_check(p[i].second);
                else if (p[i].first < ans[q].second) {
                    if (p[i].first < ans[q].first)
                        ans[q].first = front_check(p[i].first);
                    if (p[i].second > ans[q].second)
                        ans[q].second = back_check(p[i].second);
                }
            }
        }
        //cout<<ans[0].first<<endl;
        if (ans[0].first > 1) {
            temp = 1;
            for (i = 0; i < ans.size(); i++) {
                cout << temp << " " << ans[i].first << endl;
                temp = ans[i].second;
            }
            cout << temp << " " << n << endl;
        } else {
            ll nn = ans.size();
           // cout << nn << endl;
            if (ans[nn - 1].second == n)
                cout << "Sheldon ate it all !!!" << endl;
            else {
                for (i = 1; i < ans.size(); i++) {
                    cout << ans[i - 1].second << " " << ans[i].first << endl;
                }
                cout << ans[nn - 1].second << " " << n << endl;
            }
        }
    }
    return 0;
}
