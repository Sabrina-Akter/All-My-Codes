#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

#define N 100000
bool visit[N];
vector <int> g[N];

void dfs(int node)
{
    visit[node]=1;
    int i, v;
    for(i=0;i<g[node].size();i++)
    {
        v = g[node][i];
        if(visit[v]==0)
        {
            //cout << "1. v = " << v << endl;
            dfs(v);
        }
        else
        {
            //cout << "2. v = " << v << endl;
        }
    }
}

int main()
{
    fastt;
    int m, n, image=0;
    while(cin >> m)
    {
        if(m==0)
        {
            break;
        }
        image++;
        n = m;
        vll vec;
        int i, j, k, num1, num2;
        char A[m+1][n+1];
        int B[(n*m)+1];
        fill(B, B+((n*m)+1), 0);
        char CHARAC;
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                cin >> CHARAC;
                if(CHARAC=='1')
                {
                    A[i][j]='@';
                }
                else if(CHARAC=='0')
                {
                    A[i][j]='*';
                }
            }
        }
        int X[8]={-1, -1, -1, 0, 0, 1, 1, 1};
        int Y[8]={-1, 0, 1, -1, 1, -1, 0, 1};
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(A[i][j]=='@')
                {
                    num1 = ((i-1)*n)+j;
                    B[num1] = 1;
                    //cout << "num1 = " << num1 << endl;
                    for(k=0;k<8;k++)
                    {
                        if(((i+X[k])<1) || (j+Y[k]<1) || ((i+X[k])>m) || (j+Y[k]>n))
                        {
                            continue;
                        }
                        if(A[i+X[k]][j+Y[k]]=='@')
                        {
                            num2 = (((i+X[k])-1)*n)+(j+Y[k]);
                            //cout << "num2 = " << num2 << endl;
                            g[num1].push_back(num2);
                            //g[num2].push_back(num1);
                            //cout << "g[" << num1 << "].push_back(" << num2 << ")" << endl;
                            //cout << "g[" << num2 << "].push_back(" << num1 << ")" << endl;
                        }
                    }
                }
            }
        }
        /*for(i=1;i<=25;i++)
        {
            for(j=0;j<g[i].size();j++)
            {
                cout << "i = " << i << endl;
                cout << "g[" << i << "][" << j << "] = " << g[i][j] << endl;
            }
        }*/

        for(i=1;i<=m*n;i++)
        {
            if(visit[i]==0 && B[i]==1)
            {
                vec.pb(i);
                //cout << "i = " << i << endl;
                dfs(i);
            }
            //cout << "*****i = " << i << endl;
        }
        //cout << "Size = " << vec.size() << endl;
        cout << "Image number " << image << " contains " << vec.size() << " war eagles." << endl;
        for(i=0;i<=n*m;i++)
        {
            g[i].clear();
        }
        fill(visit,visit+N,0);
    }
    return 0;
}
