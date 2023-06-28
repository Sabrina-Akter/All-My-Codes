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
    ll n, m, a, b, i, j, k, changes=0, g=-1;
    cin >> n >> m;
    vector <ll> v[n+1];
    ll A[n+1];
    fill(A,A+n+1,0);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            v[i].push_back(0);
        }
    }
    for(i=0;i<m;i++)
    {
        cin >> a >> b;
        v[a][b] = 1;
        v[b][a] = 1;
        A[a]++;
        A[b]++;
    }
    while(1)
    {
        g++;
        changes = 0;
        vll e;
        for(i=1;i<=n;i++)
        {
            if(A[i]==1)
            {
                changes++;
                A[i] = 0;
                for(j=1;j<=n;j++)
                {
                    if(v[i][j]==1)
                    {
                        e.pb(j);
                        v[i][j]=0;
                        v[j][i]=0;
                        break;
                    }
                }
            }
        }
        for(k=0;k<e.size();k++)
        {
            A[e[k]]--;
        }
        if(changes==0)
        {
            cout << g << endl;
            break;
        }
    }
    return 0;
}
