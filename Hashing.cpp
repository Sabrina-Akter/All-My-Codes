#include<bits/stdc++.h>
using namespace std;
#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll  long long
#define pb push_back

ll hs[100005],ht[100005],pw[100005],prm=131,md=1e9+9;
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
    ll ts,cs=1;
    pw[0]=1;
    for(ll i=1;i<100005;i++)pw[i]=(prm*pw[i-1])%md;
    cin>>ts;
    while(ts--)
    {
        string s,t;
        cin>>s>>t;
        ll tz=t.size(),ans=0;
        hs[0]=s[0];ht[0]=t[0];
        ///Hashing of strings s and t:
        for(ll i=1;i<s.size();i++)hs[i]=(hs[i-1]+(s[i]*pw[i])%md)%md;
        for(ll i=1;i<t.size();i++)ht[i]=(ht[i-1]+(t[i]*pw[i])%md)%md;
        ///Full hash value of string t is stored in ths
        ll ths=ht[tz-1];
        for(ll i=t.size()-1;i<s.size();i++)
        {
            ll shs=hs[i];
            if(i-tz>=0)
            {
                shs=(shs-hs[i-tz])%md;
                shs=(shs+md)%md;
                shs=(shs*bigmod(pw[i-tz+1],md-2))%md;
            }
            if(ths==shs)ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
