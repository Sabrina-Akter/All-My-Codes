#include<bits/stdc++.h>
using namespace std;
#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll  long long
#define pb push_back

ll hs[100005],pw[100005],prm=131,md=1e9+9;
ll A[50000][50];
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
    ll T,cs=0;
    pw[0]=1;
    for(ll i=1;i<100005;i++)pw[i]=(prm*pw[i-1])%md;
    cin>>T;
    while(T--)
    {
        cs++;
        ll n, i, j, Max=0;
        memset(A,0,sizeof A);
        string s;
        vector <string> v;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> s;
            v.pb(s);
            hs[0]=s[0];
            for(j=1;j<s.size();j++)
            {
                hs[j]=(hs[j-1]+(s[j]*pw[j])%md)%md;
                A[i][j] = hs[j];
                cout << A[i][j] << endl;
            }
        }
        /*for(i=0;i<50;i++)
        {
            for(j=0;j<n;j++)
            {

            }
        }*/
        cout << "Case " << cs << ": " << Max << endl;
    }
    return 0;
}
