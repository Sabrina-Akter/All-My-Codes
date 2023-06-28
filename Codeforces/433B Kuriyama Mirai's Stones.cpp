#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, m, j, t, sum=0, x, y, z;
    cin >> n;
    long long A[n], B[n];
    for(i=0;i<n;i++)
    {
        cin >> t;
        A[i] = t;
        B[i] = t;
        if(i!=0)
        {
            A[i] = A[i] + A[i-1];
        }
    }
    sort(B, B+n);
    for(i=0;i<n;i++)
    {
        if(i!=0)
        {
            B[i] = B[i] + B[i-1];
        }
    }
    cin >> m;
    for(j=0;j<m;j++)
    {
        cin >> x >> y >> z;
        if(x==1)
        {
            if(y==1)
            {
                cout << A[z-1] << endl;
            }
            else
            {
                cout << A[z-1] - A[y-2] << endl;
            }
        }
        else if(x==2)
        {
            if(y==1)
            {
                cout << B[z-1] << endl;
            }
            else
            {
                cout << B[z-1] - B[y-2] << endl;
            }
        }
    }
    return 0;
}

