#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll a, b, c, i;
    cin >> a >> b;
    for(i=0;i<=255;i++)
    {
        c = a^i;
        if(c==b)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
