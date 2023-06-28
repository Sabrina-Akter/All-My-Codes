#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(i,x,y) for(ll i=x;i<=y;i++)
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    double n, i, x, a, b, c, flag=0;
    cin >> n;
    vll v;
    for(i=0;i<n;i++)
    {
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    for(i=v.size()-1;i>=2;i--)
    {
        a = v[i], b = v[i-1], c = v[i-2];
        if((a+b>c)&&(b+c>a)&&(a+c>b))
        {
            flag = 1;
            cout << "YES" << endl;
            break;
        }
    }
    if(flag==0)
    {
        cout << "NO" << endl;
    }
    return 0;
}
