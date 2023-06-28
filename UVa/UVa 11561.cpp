#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

#define N 100000
bool visit[N];
vector <int> g[N];
int B[N];
int D[N];
int Gold=0;

void dfs(int node)
{
    visit[node]=1;
    int i, v;
    for(i=0;i<g[node].size();i++)
    {
        v = g[node][i];
        if(visit[v]==0)
        {
            if(B[v]==2)
            {
                Gold++;
                //cout << "3. v = " << v << endl;
            }
            //cout << "1. v = " << v << endl;
            dfs(v);
        }
        /*else
        {
            cout << "2. v = " << v << endl;
        }*/
    }
}

int main()
{
    fastt;
    int n, m, i, j, k, P, NN, M;
    while(cin >> M >> NN)
    {
        Gold=0;
        n = NN;
        m = M;
        if(m==0 || n==0)
        {
            cout << Gold << endl;
            continue;
        }
        int num1, num2;
        int X[4]={1, -1, 0, 0};
        int Y[4]={0, 0, -1, 1};
        char A[n+1][m+1];
        fill(B, B+N, 0);
        fill(D, D+N, 0);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin >> A[i][j];
                if(A[i][j]=='#')
                {
                    B[((i-1)*m)+j] = 1;//1.Wall
                }
                if(A[i][j]=='.')
                {
                    B[((i-1)*m)+j] = 0;//2.Space
                }
                if(A[i][j]=='P')
                {
                    P = ((i-1)*m)+j;
                    //cout << "P = " << P << endl;
                    B[((i-1)*m)+j] = 0;//3.Person or Space
                }
                if(A[i][j]=='T')
                {
                    B[((i-1)*m)+j] = 3;//4.Trap
                }
                if(A[i][j]=='G')
                {
                    B[((i-1)*m)+j] = 2;//6.Gold
                }
                //cout << "B[" << i << "][" << j << "] = " << B[((i-1)*m)+j] << endl;
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(B[((i-1)*m)+j]==3)
                {
                    for(k=0;k<4;k++)
                    {
                        if(((i+X[k])<1) || (j+Y[k]<1) || ((i+X[k])>n) || (j+Y[k]>m))
                        {
                            continue;
                        }
                        else if(B[(((i+X[k])-1)*m)+(j+Y[k])]==1)
                        {
                            //cout << "k = " << k << endl;
                            continue;
                        }
                        D[(((i+X[k])-1)*m)+(j+Y[k])]=4;//5.Draft
                        //cout << "D[" << (((i+X[k])-1)*m)+(j+Y[k]) << "] = " << D[(((i+X[k])-1)*m)+(j+Y[k])] << endl;
                    }
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if((A[i][j]=='.' || A[i][j]=='P' || A[i][j]=='G') && (D[((i-1)*m)+j] !=4))
                {
                    num1 = ((i-1)*m)+j;
                    //cout << "num1 = " << num1 << endl;
                    for(k=0;k<4;k++)
                    {
                        if(((i+X[k])<1) || (j+Y[k]<1) || ((i+X[k])>n) || (j+Y[k]>m))
                        {
                            continue;
                        }
                        if((A[i+X[k]][j+Y[k]]=='.' || A[i+X[k]][j+Y[k]]=='P' || A[i+X[k]][j+Y[k]]=='G' || (D[(((i+X[k])-1)*m)+(j+Y[k])]==4)) && (A[i+X[k]][j+Y[k]]!='#' && A[i+X[k]][j+Y[k]]!='T'))
                        {
                            num2 = (((i+X[k])-1)*m)+(j+Y[k]);
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
        /*for(i=1;i<=n*m;i++)
        {
            for(j=0;j<g[i].size();j++)
            {
                cout << "g[" << i << "][" << j << "] = " << g[i][j] << " ";
            }
            cout << endl;
        }*/
        dfs(P);
        cout << Gold << endl;
        for(i=0;i<=n*m;i++)
        {
            g[i].clear();
        }
        fill(visit,visit+N,0);
    }
    return 0;
}
