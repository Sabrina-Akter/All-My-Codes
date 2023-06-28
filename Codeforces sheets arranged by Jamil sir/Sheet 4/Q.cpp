#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i, flag=0, n=1;
    vector <string> v;
    string s, S="";
    getline(cin, s);
    s = s  + ' ';
    for(i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            v.pb(S);
            S = "";
        }
        else
        {
            S = S+s[i];
        }
    }
    for(i=0;i<v.size();i++)
    {
        ll c=count(v[i].begin(), v[i].end(), ' ');
        if(c==v[i].size())
        {
            continue;
        }
        else
        {
            if(n==1)
            {
                reverse(v[i].begin(), v[i].end());
                cout << v[i];
                n++;
            }
            else if(n!=1)
            {
                reverse(v[i].begin(), v[i].end());
                cout << " " << v[i];
            }
        }
    }
    return 0;
}
