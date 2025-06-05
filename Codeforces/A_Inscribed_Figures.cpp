#include <bits/stdc++.h>
using namespace std;
#define vll vector<long long int>
#define pb push_back

int n, a, l, ll, cnt = 0;

int main()
{
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a + l == 5)
        {
            cout << "Infinite";
            return 0;
        }
        if (l)
        {
            if (a == 1) cnt += l + 1;
            else if (a == 2) cnt += (ll == 3 ? 2 : 3);
            else cnt += 4;
        }
        ll = l;
        l = a;
    }
    cout << "Finite\n" << cnt;
    return 0;
}