#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector<ll>
#define pb push_back

int main()
{
    fastt;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, i, prod = 1;
        cin >> n >> m;
        vll v(n);
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
            prod *= v[i];
        }

        string s;
        cin >> s;
        int left = 0, right = n - 1;
        for (i = 0; i < n; i++)
        {
            cout << prod % m << " ";
            if (s[i] == 'L')
            {
                prod /= v[left];
                left++;
            }
            else
            {
                prod /= v[right];
                right--;
            }
        }
        cout << endl;
    }

    return 0;
}
