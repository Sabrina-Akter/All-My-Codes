#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
//#define N 100000

int main()
{
    fastt;
    ll a, b, c, A, B, C;
    cin >> a >> b >> c;
    vll v;
    v.pb(a);
    v.pb(b);
    v.pb(c);
    A = count(v.begin(), v.end(), a);
    B = count(v.begin(), v.end(), b);
    C = count(v.begin(), v.end(), c);
    if(A==1 && B==1 && C==1)
    {
        cout << 0 << endl;
    }
    else if(A==3)
    {
        cout << a << endl;
    }
    else if(B==3)
    {
        cout << b << endl;
    }
    else if(C==3)
    {
        cout << c << endl;
    }
    else if(A==1)
    {
        cout << a << endl;
    }
    else if(B==1)
    {
        cout << b << endl;
    }
    else if(C==1)
    {
        cout << c << endl;
    }
    return 0;
}
