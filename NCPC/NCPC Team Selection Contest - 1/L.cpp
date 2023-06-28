#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i;
        cin >> n;
        cin.ignore(256,'\n');
        string s;
        cin >> s;
        vector <char> SS;
        for(i=0;i<s.size();i++)
        {
            SS.pb(s[i]);
        }
        for(i=0;i<s.size();i++)
        {
            cout << SS[i];
        }
    }
    return 0;
}
