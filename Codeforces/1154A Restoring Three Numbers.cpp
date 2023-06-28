#include <bits/stdc++.h>
using namespace std;
#define ll long long

void show()
{
    ll a, b, c, d;
    ll N[4];
    cin >> a >> b >> c >> d;
    N[0] = a;
    N[1] = b;
    N[2] = c;
    N[3] = d;
    sort(N, N+4);
    cout << N[3] - N[2] << " " << N[3] - N[1] << " " << N[3] - N[0] << endl;
}

int main()
{
    show();
    return 0;
}

