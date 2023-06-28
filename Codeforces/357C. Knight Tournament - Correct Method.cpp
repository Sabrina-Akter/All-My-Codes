#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int n, m, ans[500005];
set <int> s;
vector <int> v;

int main()
{
    fastt;
    cin >> n >> m; ///n = no. of knights, m = no. of tournaments
    for (int i = 1; i <= n; i++)
    {
        s.insert(i); ///In a set s, we inserted all the numbers from 1 to n
    }
    for (int i = 1; i <= m; i++)
    {
        int l, r, x; ///l=staring of range, r=ending of range, x=winner of that range
        cin >> l >> r >> x;
        v.clear();
        for (set <int> :: iterator it = s.lower_bound(l); it != s.end() && *it <= r; ++it)
        {
            if (*it != x)
            {
                v.push_back(*it);
                cout << *it << " ";
            }
        }
        cout << endl;
        for (vector <int> :: iterator it = v.begin(); it != v.end(); ++it)
        {
            ans[*it] = x;

            s.erase(*it);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("%d\n", ans[i]);
        }
        else
        {
            printf("%d ", ans[i]);
        }
    }
    return 0;
}
