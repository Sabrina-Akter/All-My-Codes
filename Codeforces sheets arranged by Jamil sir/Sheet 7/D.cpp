#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

void digit(ll n)
{
    if (n/10 > 0)
    {
        digit(n/10);
    }
    cout << n%10 << " ";
}
int main()
{
    fastt;
    ll n, t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        digit(n);
        cout << endl;
    }
    return 0;
}
