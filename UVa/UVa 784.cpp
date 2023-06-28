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
        /*else
        {
            //cout << "visit[" << v << "] = " << visit[v] << endl;
            //cout << "2. v = " << v << endl;
        }*/
    }
}

int main()
{
    fastt;
    int n,i, j, k, wall=0, ROW, COL, num1, num2;
    string s;
    vector <string> v;
    vector <int> Size, star;
    cin >> n;
    cin.ignore(256, '\n');
    while(getline(cin,s))
    {
        Size.pb(s.size());
        v.pb(s);
        if(s[0]=='_')
        {
            wall++;
        }
        if(wall==n)
        {
            break;
        }
    }
    ROW = v.size();
    COL = (*max_element(Size.begin(), Size.end()));
    char A[1000][1000];
    fill(A[0], A[0]+(1000)*(1000), ' ');
    int B[N];
    fill(B, B+N, 0);
    int CC = 0;
    for(i=0;i<ROW;i++)
    {
        CC = 0;
        for(j=0;j<COL;j++)
        {
            CC++;
            if(CC>Size[i])
            {
                break;
            }
            A[i][j] = v[i][j];
            if(A[i][j]=='*')
            {
                star.pb(((i)*COL)+(j+1));
            }
            //cout << A[i][j];
        }
        //cout << endl;

    }
    int X[4]={-1, 1, 0, 0};
    int Y[4]={0, 0, -1, 1};
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(A[i][j]==' ' || A[i][j]=='*')
            {
                num1 = ((i)*COL)+(j+1);
                B[num1] = 1;
                //cout << "num1 = " << num1 << endl;
                for(k=0;k<4;k++)
                {
                    if(((i+X[k])<0) || (j+Y[k]<0) || ((i+X[k])>=ROW) || (j+Y[k]>=COL))
                    {
                        continue;
                    }
                    if(A[i+X[k]][j+Y[k]]==' ' || A[i+X[k]][j+Y[k]]=='*')
                    {
                        //cout << "k = " << k << endl;
                        num2 = (((i+X[k]))*COL)+(j+Y[k]+1);
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
    for(i=0;i<star.size();i++)
    {
        dfs(star[i]);
    }
    CC = 0;
    for(i=0;i<ROW;i++)
    {
        CC = 0;
        for(j=0;j<COL;j++)
        {
            CC++;
            if(CC>Size[i])
            {
                break;
            }
            if((j+1)>COL)
            {
                continue;
            }
            if(visit[((i)*COL)+(j+1)]==1)
            {
                cout << "#";
            }
            else
            {
                cout << A[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}
