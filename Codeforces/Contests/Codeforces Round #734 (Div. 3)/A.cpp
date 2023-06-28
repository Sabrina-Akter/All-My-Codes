#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, c1, c2, dif;
        cin >> n;
        c1 = n/3;
        c2 = n-(c1*2);
        dif=abs(c1-c2);
        if(dif==2)
        {
            c1++;
            c2 = n-(c1*2);
        }
        cout << c2 << " " << c1 << endl;
    }
    return 0;
}
