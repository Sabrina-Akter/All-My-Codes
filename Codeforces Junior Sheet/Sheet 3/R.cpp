#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, sum=0;
    cin >> n;
    long long A[n], B[n];
    for(i=0;i<n;i++)
    {
        cin >> A[i];
    }
    for(i=0;i<n;i++)
    {
        cin >> B[i];
    }
    sort(A,A+n);
    sort(B,B+n);
    for(i=0;i<n;i++)
    {
        if(A[i]==B[i])
        {
            sum++;
        }
        else
        {
            break;
        }
    }
    if(sum==n)
    {
        cout << "yes\n";
    }
    else
    {
        cout << "no\n";
    }

}
