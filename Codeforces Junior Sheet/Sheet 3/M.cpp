#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, x, y;
    cin >> n;
    long long A[n-1], B[n-1];
    for(i=0;i<n;i++)
    {
        cin >> A[i];
        B[i] = A[i];
    }
    sort(B, B+n);
    x = B[0];
    y = B[n-1];
    for(i=0;i<n;i++)
    {
        if(A[i]==x)
        {
            cout << y << " ";
        }
        else if(A[i]==y)
        {
            cout << x << " ";
        }
        else
        {
            cout << A[i] << " ";
        }
    }
    return 0;
}
