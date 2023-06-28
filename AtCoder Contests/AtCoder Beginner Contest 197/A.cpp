#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i;
    string s;
    cin >> s;
    vector <char> v;
    for(i=0;i<s.size();i++)
    {
        v.pb(s[i]);
    }
    rotate(v.begin(), v.begin()+1, v.end());
    for(i=0;i<v.size();i++)
    {
        cout << v[i];
    }
    cout << endl;
    return 0;
}
