#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a, b, c;
    int N[6];
    cin >> a >> b >> c;
    N[0] = a+b+c;
    N[1] = a*b*c;
    N[2] = (a+b)*c;
    N[3] = a*(b+c);
    N[4] = (a*b)+c;
    N[5] = a*(b+c);
    sort(N,N+6);
    cout << N[5] << endl;
    return 0;
}
