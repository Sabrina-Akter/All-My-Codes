#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

int main()
{
    fastt;
    ll t, a, b, c, d, X, Y, Cs=0;
    cin >> t;
    while(t--)
    {
        Cs++;
        cin >> a >> b >> c >> d;
        X = c - a;
        Y = d - b;
        if(X%3==0 && Y%2==0)
        {
            cout << "Case " << Cs << ": YES" << endl;
        }
        else
        {
            cout << "Case " << Cs << ": YES" << endl;
        }
    }
    return 0;
}
