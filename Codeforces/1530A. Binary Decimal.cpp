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
        ll i, n, MAX=0;
        string s;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            n = s[i]-48;
            MAX = max(MAX, n);
        }
        cout << MAX << endl;
    }
    return 0;
}
