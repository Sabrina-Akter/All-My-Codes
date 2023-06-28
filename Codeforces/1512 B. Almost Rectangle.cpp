#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll x, i, j, x1, x2, y1, y2, first=0;
        cin >> x;
        char A[x][x];
        //fill(A, A+500*500, ' ');
        for(i=0;i<x;i++)
        {
            for(j=0;j<x;j++)
            {
                cin >> A[i][j];
                if(A[i][j]=='*' && first==0)
                {
                    x1 = i, y1 = j;
                    first = 1;
                }
                else if(A[i][j]=='*' && first==1)
                {
                    x2 = i, y2 = j;
                }
            }
        }
        if(x1==x2)
        {
            if((x1-1)>=0)
            {
                A[x1-1][y1]='*';
                A[x2-1][y2]='*';
            }
            else if((x1+1)<x)
            {
                A[x1+1][y1]='*';
                A[x2+1][y2]='*';
            }
        }
        else if(y1==y2)
        {
            if((y1-1)>=0)
            {
                A[x1][y1-1]='*';
                A[x2][y2-1]='*';
            }
            else if((y1+1)<=x)
            {
                A[x1][y1+1]='*';
                A[x2][y2+1]='*';
            }
        }
        else if((x1!=x2) && (y1!=y2))
        {
            A[x1][y2] = '*';
            A[x2][y1] = '*';
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<x;j++)
            {
                cout <<  A[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
