#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, m, a, b, i, j, Count=0, x, y;
    cin >> n >> m >> a >> b;
    a = a-1;
    b = b-1;
    x = a-1;
    y = b;
    char A[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin >> A[i][j];
        }
    }
    //1:Top
    while(1)
    {
        if(A[x][y]=='.')
        {
            if(x<0)
            {
                break;
            }
            Count++;
            x = x-1;
        }
        else
        {
            break;
        }
    }
    x = a+1, y = b;
    //2:Bottom
    while(1)
    {
        if(A[x][y]=='.')
        {
            if(x>=n)
            {
                break;
            }
            Count++;
            x = x+1;
        }
        else
        {
            break;
        }
    }
    x = a, y = b+1;
    //3:Right
    while(1)
    {
        if(A[x][y]=='.')
        {
            if(y>=m)
            {
                break;
            }
            Count++;
            y = y+1;
        }
        else
        {
            break;
        }
    }
    x = a, y = b-1;
    //4:Left
    while(1)
    {
        if(A[x][y]=='.')
        {
            if(y<0)
            {
                break;
            }
            Count++;
            y = y-1;
        }
        else
        {
            break;
        }
    }
    cout << Count+1 << endl;
    return 0;
}
