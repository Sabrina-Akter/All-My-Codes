#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, a, x, y, A;
    cin >> n >> a >> x >> y;
    if(a>=n)
    {
        cout << (x*n) << endl;
    }
    else
    {
        A = n-a;
        cout << (a*x)+(A*y) << endl;
    }
    return 0;
}
