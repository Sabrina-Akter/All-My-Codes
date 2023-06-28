#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    map <string, ll> m;
    map <string, ll>::iterator it;
    ll t, MAX=0;
    string S;
    cin >> t;
    while(t--)
    {
        string s;
        ll n;
        cin >> s >> n;
        m[s]+=n;
    }
    for(it=m.begin();it!=m.end();it++)
    {
        if((it->second)>MAX)
        {
            MAX = it->second;
            S = it->first;
        }
    }
    cout << S << endl;
    return 0;
}
