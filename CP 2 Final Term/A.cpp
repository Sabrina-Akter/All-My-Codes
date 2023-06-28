#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i, j;
    ll n, a, b, c=0;
    cin >> n;
    while(n--)
    {
        c++;
        cin >> a >> b;
        cout << "Case " << c << ": ";
        if(a==b)
        {
            cout << 24 << endl;
        }
        else if((b-a)>0)
        {
            cout << b-a << endl;
        }
        else if((b-a)<0)
        {
            cout << (24-a)+b << endl;
        }
    }
    return 0;
}
