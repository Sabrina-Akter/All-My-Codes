#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i, a, b, c, sum, MIN=10000000;
    vll v(3);
    for(i=0;i<3;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    a = v[0], b = v[1], c = v[2];
    for(i=a;i<=c;i++)
    {
        sum = (abs(a-i))+(abs(b-i))+(abs(c-i));
        MIN = min(sum, MIN);
    }
    cout << MIN << endl;
    return 0;
}
