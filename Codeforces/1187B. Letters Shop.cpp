#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

vll v[1000000];

int main()
{
    fastt;
    ll i, j, num, k, t;
    string s, S;
    cin >> t;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        num=s[i]-96;
        v[num].pb(i+1);
    }
    ll n;
    cin >> n;
    for(i=0;i<n;i++)
    {
        ll mx=-10000000000, pos[27]={0};
        cin >> S;
        for(j=0;j<S.size();j++)
        {
            num=S[j]-96;
            for(k=pos[num];k<v[num].size();k++)
            {
                mx=max((v[num][k]), mx);
                pos[num]++;
                break;
            }
        }
        cout << mx << endl;
    }
    return 0;
}
