#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
//#define N 100000

int main()
{
    fastt;
    vector <string> v;
    ll a, b, i, j, c=0;
    cin >> a >> b;
    string s, t, r, x="", S;
    cin >> s;
    t = s;
    reverse(t.begin(),t.end());
    if(b==1)
    {
        cout << s << endl;
    }
    else
    {
        for(i=0;i<t.size();i++)
        {
            x+=t[i];
            r = x;
            reverse(r.begin(),r.end());
            v.pb(r);
        }
        ll flag=0;
        for(i=0;i<v.size();i++)
        {
            flag=0;
            S = s+v[i];
            ll c=-1;
            for(j=i+1;j<S.size();j++)
            {
                c++;
                if(S[j]!=s[c])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                i++;
                break;
            }
        }
        cout << s;
        for(j=1;j<b;j++)
        {
            cout << v[i-1];
        }
        cout << endl;
    }
    return 0;
}
