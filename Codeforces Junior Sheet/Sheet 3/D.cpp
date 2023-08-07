#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i;
    cin >> n;
    long long A[n-1];
    for(i=0;i<n;i++)
    {
        cin >> A[i];
    }
    for(i=0;i<n;i++)
    {
        if(A[i]<=10)
        {
            cout << "A[" << i << "] = " << A[i] << endl;
        }
    }
    return 0;
}
