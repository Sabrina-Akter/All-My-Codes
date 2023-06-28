#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(i,x,y) for(ll i=x;i<=y;i++)
#define vll vector <ll>
#define pb push_back
ll move = 0, X2, Y2;

ll DFS(ll u, ll v, ll N)
{
    if((u<0 || u>2) || (v<0 || v>2))
    {
        return 0;
    }
    else
    {
        //1
        DFS(u-2,v-1,move+1);
        //2
        DFS(u-2,v+1,move+1);
        //3
        DFS(u-1,v-2,move+1);
        //4
        DFS(u-1,v+2,move+1);
        //5
        DFS(u+1,v-2,move+1);
        //6
        DFS(u+1,v+2,move+1);
        //7
        DFS(u+2,v-1,move+1);
        //8
        DFS(u+2,v+1,move+1);
    }
}

int main()
{
    fastt;
    char s[10];
    while(gets(s))
    {
        ll x1=s[0]-97, y1=s[1]-49, x2=s[3]-97, X2 = x2, y2=s[4]-49, Y2 = y2, finish=10,move=0;
        if(DFS(x1,y1,move)==finish)
        {
            cout << "Moves = " << move << endl;
            finish++;
        }
    }
    return 0;
}
