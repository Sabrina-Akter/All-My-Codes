#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t, a, b, c, Q_R, Q_C;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        if(c%a==0)
        {
            Q_C = c/a;
        }
        else
        {
            Q_C = (c/a)+1;
        }
        if(c%a==0)
        {
            Q_R = a;
        }
        else
        {
            Q_R = c%a;
        }
        cout << ((Q_R-1)*b)+Q_C << endl;
    }
    return 0;
}
