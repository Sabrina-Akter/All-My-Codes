#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

map <string, ll> m;

int main()
{
    fastt;
    ll n, i, MAX=0;
    cin >> n;
    string s, S;
    for(i=0;i<n;i++)
    {
        cin >> s;
        m[s];
        m[s]++;
        if(m[s]>MAX)
        {
            MAX=m[s];
            S = s;
        }
    }
    cout << S << endl;
    return 0;
}
