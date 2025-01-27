#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vll vector<ll>
#define pb push_back

int main()
{
    int t;
    cin >> t;

    while (t--)
    {    
        int n;
        cin >> n;
        vll A(n);

        for (auto &a : A)
        {
            cin >> a;
        }

        auto f = [&A](int i)
        {
            return max(1LL + max(A[i + 1], A[i - 1]) - A[i], 0LL);
        };

        ll c = 0;
        for (int i = n - 2; i > 0; i -= 2)
        {
            c += f(i);
        }

        ll a = c;
        for (int i = 2; i < n; i += 2)
        {
            a = min(a, c += f(i - 1) - f(i - n % 2));
        }

        cout << a << '\n';
    }

    return 0;
}
