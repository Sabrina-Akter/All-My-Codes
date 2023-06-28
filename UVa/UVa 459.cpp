#include <bits/stdc++.h>
#define ll long long int
#define N 100000
using namespace std;

vector <ll> v[N];
bool visit[N];

void dfs(ll node)
{
    visit[node]=1;
    long long i, vis;
    for(i=0;i<v[node].size();i++)
    {
        vis = v[node][i];
        if(visit[vis]==0)
        {
            dfs(vis);
        }
    }
}
int main()
{
    ll t, h, i, a, b;
    char c;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> c;
        cin.ignore();
        ll sum=0;
        h = c - 65;
        //while(cin>>s)
        while (getline(cin, s) && s != "")
        {
            for(i=0;i<s.size()-1;i++)
            {
                a = s[i] - 65;
                b = s[i+1] - 65;
                v[a].push_back(b);
                v[b].push_back(a);
            }
        }
        for(i=0;i<=h;i++)
        {
            if(visit[i]==0)
            {
                sum++;
                dfs(i);
            }
        }
        cout << sum << endl;
        if(t>0)
        {
            cout << endl;
        }
        for(i=0;i<=h;i++)
        {
            v[i].clear();
        }
        fill(visit,visit+N,0);
    }

    return 0;
}
