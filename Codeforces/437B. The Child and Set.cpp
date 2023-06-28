#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
//#define N 100000

ll lowbit(ll n)
{
    return n&(-n);
}

int main()
{
    fastt;
    ll i, n, s, sum=0;
    cin >> s >> n;
    vll v;
    for(i=n;i>=1;i--)
    {
        ll L=lowbit(i);
        if(sum+L<=s)
        {
            sum+=L;
            v.pb(i);
            if(sum==s)
            {
                break;
            }
        }
        else if(sum+L>s)
        {
            continue;
        }
    }
    if(sum!=s)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << v.size() << endl;
        for(i=0;i<v.size();i++)
        {
            cout << v[i] << " ";
        }
    }
    return 0;
}
