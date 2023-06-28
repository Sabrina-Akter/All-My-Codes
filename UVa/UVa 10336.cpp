#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

char A[1000][1000];
char CHAR;

void dfs(char c, ll x, ll y)
{
    A[x][y] = '*';
    ll X[4]={0,1,0,-1};
    ll Y[4]={1,0,-1,0};
    int k;
    for(k=0;k<4;k++)
    {
        if(A[x+X[k]][y+Y[k]]==CHAR)
        {
            dfs(CHAR,(x+X[k]),(y+Y[k]));
        }
    }
}

int main()
{
    fastt;
    ll t, world=0;
    cin >> t;
    while(t--)
    {
        ll c, r, i, j, num;
        world++;
        cin >> c >> r;
        if(c==0)
        {
            cout << "World #" << world << endl;
            continue;
        }
        ll Al[27];
        fill(Al,Al+27,0);
        for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
                cin >> A[i][j];
            }
        }
        for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
                if(A[i][j]!='*')
                {
                    CHAR = A[i][j];
                    num = CHAR-96;
                    Al[num]++;
                    //cout << "CHAR = " << CHAR << endl;
                    dfs(CHAR, i, j);
                }
            }
        }
        vll V;
        for(i=1;i<=26;i++)
        {
            if(Al[i]!=0)
            {
                V.pb(Al[i]);
            }
        }
        cout << "World #" << world << endl;
        sort(V.begin(),V.end());
        for(i=V.size()-1;i>=0;i--)
        {
            for(j=1;j<=26;j++)
            {
                if(V[i]==Al[j])
                {
                    char cc = 96+j;
                    cout << cc << ": " << V[i] << endl;
                    Al[j]=0;
                }
            }
        }
        fill(A[0], A[0]+1000*1000, '*');
    }
    return 0;
}
