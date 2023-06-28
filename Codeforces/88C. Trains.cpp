#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back


int main()
{
    fastt;
    ll D, M, LCM, d, m;
    cin >> D >> M;
    LCM = (D / __gcd(D, M))*M;
    d = LCM/D;
    m = LCM/M;

    if(D>M)
    {
        d++;
    }
    else
    {
        m++;
    }
    if(d==m)
    {
        cout << "Equal" << endl;
    }
    else if(d>m)
    {
        cout << "Dasha" << endl;
    }
    else if(m>d)
    {
        cout << "Masha" << endl;
    }

    return 0;
}
