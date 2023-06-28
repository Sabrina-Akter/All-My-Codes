#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 100000

ll A[100010] = {0};

void printNcR(int n, int r)
{
    long long p = 1, k = 1;

    if (n - r < r)
        r = n - r;

    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }

    else
        p = 1;
    cout << p << endl;
}

int main()
{
    fastt;
    ll t, n, k, r;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        r = k-1;
        n = n-k+r;
        printNcR(n, r);
    }
    return 0;
}
