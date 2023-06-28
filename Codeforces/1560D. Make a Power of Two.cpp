#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define endl "\n"

int main()
{
    fastt;
    ll i, j, k, pow=1, p, flag=0, dif, mn;
    char c;
    vector <string> v;
    v.pb("1");
    for(i=0;i<60;i++)
    {
        string S="";
        pow*=2;
        p = pow;
        while(1)
        {
            c=(p%10)+48;
            S.pb(c);
            p=p/10;
            if(p==0)
            {
                break;
            }
        }
        reverse(S.begin(), S.end());
        v.pb(S);
    }
    ll t;
    cin >> t;
    while(t--)
    {
        mn = INT_MAX;
        string s;
        cin >> s;
        for(i=0;i<v.size();i++)
        {
            k=0;
            string test;
            for(j=0;j<s.size();j++)
            {
                if(s[j]==v[i][k])
                {
                    test.pb(s[j]);
                    k++;
                }
            }
            dif=s.size()-test.size();
            dif+=(v[i].size()-test.size());
            mn = min(mn, dif);
        }
        cout << mn << endl;
    }
    return 0;
}
