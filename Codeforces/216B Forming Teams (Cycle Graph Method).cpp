#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

#define N 100000
bool visit[N];
vector <int> g[N];
ll Count=0, L1=0,L2=0;

void dfs(int node)
{
    Count++;
    visit[node]=1;
    int i, v;
    for(i=0;i<g[node].size();i++)
    {
        v = g[node][i];
        if(visit[v]==0)
        {
            //cout << "1. v = " << v << endl;
            L1 = v;
            dfs(v);
        }
        else
        {
            //cout << "2. v = " << v << endl;
            L2 = v;
        }
    }
}

int main()
{
    fastt;
    ll n, m, i, a, b, Ans=0;
    cin >> n >> m;
    for(i=0;i<m;i++)
    {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(i=1;i<=n;i++)
    {
        if(((Count>2)) && (Count%2!=0) && (L1>0) && (L2>0) && (L1==L2))
        {
            Ans++;
        }
        //cout << "Count = " << Count << " L1 = " << L1 << " L2 = " << L2 << endl;
        Count = 0, L1=0, L2=0;
        if(visit[i]==0)
        {
            //cout << "i = " << i << endl;
            dfs(i);
        }
    }
    //cout << "Ans = " << Ans << endl;
    if((n%2==0) && (Ans%2!=0))
    {
        Ans = Ans+1;
        //cout << "1. Ans = " << Ans << endl;
        cout << Ans << endl;
    }
    else if((n%2!=0) && (Ans%2==0))
    {
        Ans = Ans+1;
        //cout << "2. Ans = " << Ans << endl;
        cout << Ans << endl;
    }
    else
    {
        //cout << "3. Ans = " << Ans << endl;
        cout << Ans << endl;
    }
    return 0;
}
