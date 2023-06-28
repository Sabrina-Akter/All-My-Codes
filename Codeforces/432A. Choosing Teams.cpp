#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define endl "\n"

int main()
{
    fastt;
    ll n, k, i, x=0;
    cin >> n >> k;
    vll v(n);
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        if(v[i]>(5-k))
        {
            break;
        }
        else
        {
            x++;
        }
    }
    cout << x/3 << endl;
    return 0;
}
