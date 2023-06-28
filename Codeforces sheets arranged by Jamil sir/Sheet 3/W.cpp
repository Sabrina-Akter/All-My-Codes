#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j, a, b;
    cin >> a >> b;
    long long A[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin >> A[i][j];
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=b-1;j>=0;j--)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
