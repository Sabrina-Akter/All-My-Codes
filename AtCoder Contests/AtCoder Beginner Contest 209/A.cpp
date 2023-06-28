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
    if(b>=a)
    {
        cout << b-a+1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}
