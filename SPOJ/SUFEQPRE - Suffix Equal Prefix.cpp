#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

ll pw[1000005],prm=131,md=1e9+9,hs[1000005];
ll bigmod(ll val,ll p)
{
    if(p==0)return 1;
    if(p%2==0)
    {
        ll res=bigmod(val,p/2);
        return (res*res)%md;
    }
    else return (val*bigmod(val,p-1))%md;
}

int main()
{
    fastt;
    ll t, c=0;
    pw[0]=1;
    for(ll i=1;i<=1000005;i++)pw[i]=(prm*pw[i-1])%md;
    cin >> t;
    while(t--)
    {
        c++;
        ll i, ans=0, shs, ths, tz, n=0;
        string s;
        cin >> s;
        hs[0]=s[0];
        for(i=1;i<s.size();i++)hs[i]=(hs[i-1]+(s[i]*pw[i])%md)%md;
        tz = s.size()-1;
        for(i=0;i<s.size()-1;i++)
        {
            shs=hs[tz];
            n++;
            ths=hs[i];
            shs=(shs-hs[tz-n])%md;
            shs=(shs+md)%md;
            shs=(shs*bigmod(pw[tz-n+1],md-2))%md;
            if(ths==shs)ans++;
        }
        cout << "Case " << c << ": " << ans << endl;
    }
    return 0;
}
