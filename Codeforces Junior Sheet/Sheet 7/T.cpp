#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

void f(double n, double r, double x, double X, double Y, double Z)
{
    if(X==1 && Y==1 && Z==1)
    {
        cout << fixed << setprecision(0) << n/(r*x) << endl;
        return;
    }
    else
    {
        if(X>1)
        {
            X--;
        }
        if(Y>1)
        {
            Y--;
        }
        if(Z>1)
        {
            Z--;
        }
        f(n*X, r*Y, x*Z, X, Y, Z);
    }
}

int main()
{
    fastt;
    double n, r;
    cin >> n >> r;
    if(r>n)
    {
        cout << 0 << endl;
    }
    else if(n==r || r==0)
    {
        cout << 1 << endl;
    }
    else
    {
        f(n, r, n-r, n, r, n-r);
    }
    return 0;
}
