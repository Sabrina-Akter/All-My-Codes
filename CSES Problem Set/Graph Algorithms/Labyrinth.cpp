#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)
#define pll pair<ll,ll>
#define plll pair<pll,ll>

const int MOD = 1000000007;
const char nl = '\n';

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

char ar[1010][1010];
int done[1010][1010];
int visit[1010][1010];
int f=0, mn = 2000000, A, B;
string ans;
void dfs(int x, int y, string s, int sum)
{
    if(sum>mn)
    {
        return;
    }
    done[x][y] = 1;
    //base
    if(ar[x][y]=='B')
    {
        f=1;
        if(sum<mn)
        {
            mn = sum;
            ans = s;
        }
        return;
    }
    //up
    if(ar[x+X[3]][y+Y[3]]!='#' && done[x+X[3]][y+Y[3]]==0 && x+X[3]>=0)
    {
        dfs(x+X[3], y+Y[3], s+='U', s.size()+1);
        s.pop_back();
        done[x+X[3]][y+Y[3]] = 0;
    }
    //down
    if(ar[x+X[2]][y+Y[2]]!='#' && done[x+X[2]][y+Y[2]]==0 && x+X[2]<A)
    {
        dfs(x+X[2], y+Y[2], s+='D', s.size()+1);
        s.pop_back();
        done[x+X[2]][y+Y[2]]=0;
    }
    //left
    if(ar[x+X[0]][y+Y[0]]!='#' && done[x+X[0]][y+Y[0]]==0 && y+Y[0]>=0)
    {
        dfs(x+X[0], y+Y[0], s+='L', s.size()+1);
        s.pop_back();
        done[x+X[0]][y+Y[0]] = 0;
    }
    //right
    if(ar[x+X[1]][y+Y[1]]!='#' && done[x+X[1]][y+Y[1]]==0 && y+Y[1]<B)
    {
        dfs(x+X[1], y+Y[1], s+='R', s.size()+1);
        s.pop_back();
        done[x+X[1]][y+Y[1]] = 0;
    }
}

int main()
{
    fastt;
    ms(done);
    ll a, b, i, j, x, y;
    cin >> a >> b;
    A = a, B = b;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin >> ar[i][j];
            if(ar[i][j]=='A')
            {
                x = i, y = j;
            }
        }
    }
    string s = "";
    int sum=0;
    dfs(x, y, s, sum);
    if(f==0)
    {
        cout << "NO" << nl;
    }
    else
    {
        cout << "YES" << nl;
        cout << mn << nl;
        cout << ans << nl;
    }
    return 0;
}