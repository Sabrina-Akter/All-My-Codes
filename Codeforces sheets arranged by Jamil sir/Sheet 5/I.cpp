#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 505
long long X, Y, nn;

void func(long long A[][N])
{
    long long i, j, t;

    for(j=0;j<nn;j++)
    {
        t = A[X-1][j];
        A[X-1][j] = A[Y-1][j];
        A[Y-1][j] = t;
    }
    for(j=0;j<nn;j++)
    {
        t = A[j][X-1];
        A[j][X-1] = A[j][Y-1];
        A[j][Y-1] = t;
    }
    for(i=0;i<nn;i++)
    {
        for(j=0;j<nn;j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    fastt;
    long long n, x, y, i, j;
    cin >> n >> x >> y;
    X=x, Y=y, nn=n;
    long long A[N][N];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> A[i][j];
        }
    }
    func(A);
    return 0;
}
