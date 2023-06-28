#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll h, w, i , j;
        cin >> h >> w;
        ll A[h+2][w+2];
        memset(A, 0, sizeof A);
        for(i=1;i<=h;i++)
        {
            for(j=1;j<=w;j++)
            {
                if(i==1 || i==h || j==1 || j==w)
                {
                    if((A[i-1][j]==0)&&(A[i][j-1]==0)&&(A[i+1][j]==0)&&(A[i][j+1]==0)&&(A[i-1][j-1]==0)&&(A[i-1][j+1]==0)&&(A[i+1][j-1]==0)&&(A[i+1][j+1]==0))
                    {
                        A[i][j]=1;
                    }
                }
                cout << A[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
