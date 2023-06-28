#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(i,x,y) for(ll i=x;i<=y;i++)
#define vll vector <ll>
#define pb push_back


int main()
{
    fastt;
    ll i, j, G, S, flag=0,n,m,sum,f=0,k,changes=0,done=0,X=0;
    cin >> n >> m;
    char A[n][m];
    vector <pair<ll, ll> > v;
    for(i=0;i<n;i++)
    {
        G = -1, S = -1;
        for(j=0;j<m;j++)
        {
            cin >> A[i][j];
            if(A[i][j]=='G')
            {
                G = j;
            }
            if(A[i][j]=='S')
            {
                S = j;
            }
            if(G!=-1 && S!=-1)
            {
                v.pb(make_pair(G,S));
            }
        }
    }
    while(1)
    {
        for(k=0;k<v.size();k++)
        {
            if((v[k].first==m-1) && (v[k].first!=v[k].second))
            {
                cout << "-1" << endl;
                changes++;
                f=1;
                break;
            }
            else if(v[k].first==v[k].second)
            {
                changes++;
                done = 1;
                v[k].first=-1;
                v[k].second=-2;
            }
            else if((v[k].first==-1) && (v[k].second==-2))
            {
                continue;
            }
            else
            {
                changes++;
                v[k].first++;
            }
        }
        if(changes==0)
        {
            cout << flag << endl;
            break;
        }
        if(done==1)
        {
            flag++;
            done = 0;
            changes=0;
        }
        if(f==1)
        {
            break;
        }
    }
    return 0;
}
