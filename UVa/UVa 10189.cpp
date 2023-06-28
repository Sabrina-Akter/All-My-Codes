#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, m, Count=0, f=0;
    while(cin >> n >> m)
    {
        Count++;
        if(n==0 && m==0)
        {
            break;
        }
        char A[n][m];
        ll B[n][m];
        ll sum, i, j, k, num;
        ll X[8]={-1, -1, -1, 0, 0, 1, 1, 1};
        ll Y[8]={-1, 0, 1, -1, 1, -1, 0, 1};
        if(f>0)
        {
            cout << endl;
        }
        f++;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin >> A[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                sum = 0;
                for(k=0;k<8;k++)
                {
                    if(((i+X[k])<0) || (j+Y[k]<0) || ((i+X[k])>=n) || (j+Y[k]>=m))
                    {
                        continue;
                    }
                    else if(A[i+X[k]][j+Y[k]]=='*')
                    {
                        sum++;
                    }
                }
                B[i][j] = sum;
            }
        }
        cout << "Field #" << Count << ":" << endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(A[i][j]=='*')
                {
                    cout << A[i][j];
                    continue;
                }
                cout << B[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
