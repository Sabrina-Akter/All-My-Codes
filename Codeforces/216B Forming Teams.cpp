#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector <ll> v[200];
ll visit[200];
ll sum=0, ans=0, C;
set <ll> A, B;

void dfs(ll node)
{
    sum++;
    if(sum%2!=0)
    {
        C = count(B.begin(), B.end(), node);
        if(C>0)
        {
            ans++;
        }
        else
        {
            A.insert(node);
        }
    }
    else if(sum%2==0)
    {
        C = count(A.begin(), A.end(), node);
        if(C>0)
        {
            ans++;
        }
        else
        {
            B.insert(node);
        }
    }
    ll i, vis;
    visit[node]=1;
    for(i=0;i<v[node].size();i++)
    {
        vis = v[node][i];
        if(visit[vis]==0)
        {
            dfs(vis);
        }
        else
        {
            sum++;
            if(sum%2!=0)
            {
                C = count(B.begin(), B.end(), vis);
                if(C>0)
                {
                    ans++;
                }
                else
                {
                    A.insert(vis);
                }
            }
            else if(sum%2==0)
            {
                C = count(A.begin(), A.end(), vis);
                if(C>0)
                {
                    ans++;
                }
                else
                {
                    B.insert(vis);
                }
            }
        }
    }
}

int main()
{
    ll n, m, i, a, b;
    cin >> n >> m;
    for(i=0;i<m;i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(i=1;i<=n;i++)
    {
        if(visit[i]==0)
        {
            cout << "i = " << i << endl;
            dfs(i);
        }
    }
    cout << ans << endl;
    return 0;
}
