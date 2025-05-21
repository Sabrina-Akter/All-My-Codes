#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define pb push_back
int n,b;
string a,c;
int main()
{
    cin >> n;
    int l = -2e9, r = 2e9;
    while (n--)
    {
        cin >> a >> b >> c;
        if ((a == ">" && c == "Y") || (a == "<=" && c == "N"))
        {
            l = max(l, b + 1);
        }
        else if ((a == ">=" && c == "Y") || (a == "<" && c == "N"))
        {
            l = max(l, b);
        }
        else if ((a == "<" && c == "Y") || (a == ">=" && c == "N"))
        {
            r = min(r, b - 1);
        }
        else
        {
            r = min(r, b);
        }
    }
    cout << (l > r ? "Impossible" : to_string(l));
    return 0;
}
