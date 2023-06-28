#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll a, b;
    cin >> a >> b;
    if(a==0 && b>0)
    {
        cout << "Silver" << endl;
    }
    else if(b==0 && a>0)
    {
        cout << "Gold" << endl;
    }
    else
    {
        cout << "Alloy" << endl;
    }
    return 0;
}
