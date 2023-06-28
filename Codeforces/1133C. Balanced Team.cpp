#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, C=0, MAX=0;
    cin >> n;
    vll v(n);
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(i=1;i<n;i++)
    {
        if(abs(v[i]-v[i-1])<=5)
        {
            C++;
        }
        else
        {
            MAX = max(MAX, C);
            C=0;
        }
    }
    cout << MAX << endl;
    return 0;
}
