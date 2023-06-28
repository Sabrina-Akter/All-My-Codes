#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t, a, b, dif, x, y;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if((a==0 && b==0) || (a==b))
        {
            cout << "0 0" << endl;
        }
        else if(a==0 || b==0)
        {
            cout << __gcd(a,b) << " " << 0 << endl;
        }
        else
        {
            dif=abs(a-b);
            x = a%dif;
            y = b%dif;
            if(x!=y)
            {
                cout << "0 0" << endl;
            }
            else
            {
                cout << dif << " " << min(x, abs(dif-x)) << endl;
            }
        }
    }
    return 0;
}
