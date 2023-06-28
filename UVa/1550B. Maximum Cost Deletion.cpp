#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t, l, a, b, i, zero=0, one=0, flag1, flag2, op;
    string s;
    cin >> t;
    while(t--)
    {
        vll v, v2;
        zero=0, one=0, flag1=0, flag2=0;
        ll sum=0, ans=0;
        cin >> l >> a >> b;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0' && flag1==0)
            {
                zero++;
                flag1=1;
                flag2=0;
                v.pb(i);
            }
            else if(s[i]=='1' && flag2==0)
            {
                one++;
                flag2=1;
                flag1=0;
                v.pb(i);
            }
        }
        if(b>=0)
        {
            cout << (a+b)*s.size() << endl;
        }
        else
        {
            for(i=0; i<v.size(); i++)
            {
                if(i!=0)
                {
                    v2.pb(v[i]-v[i-1]);
                }
            }
            v2.pb(s.size()-v[v.size()-1]);
            for(i=0; i<v2.size(); i++)
            {
                if(i%2==0)
                {
                    sum+=v2[i];
                }
                else
                {
                    ans+=((v2[i]*a)+b);
                }
            }
            ans+=((sum*a)+b);
            cout << ans << endl;
        }
    }
    return 0;
}
