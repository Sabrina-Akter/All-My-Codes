#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t, h, m;
    cin >> t;
    while(t--)
    {
        cin >> h >> m;
        if(m==0)
        {
            cout << (24-h)*60 << endl;
        }
        else
        {
            cout << ((24-h-1)*60)+(60-m) << endl;
        }
    }
    return 0;
}
