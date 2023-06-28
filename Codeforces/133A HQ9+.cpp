#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int H, Q, nine;
    string p;
    cin >> p;

    H = count(p.begin(), p.end(), 'H');
    Q = count(p.begin(), p.end(), 'Q');
    nine = count(p.begin(), p.end(), '9');

    if((H>0) || (Q>0) || (nine>0))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
