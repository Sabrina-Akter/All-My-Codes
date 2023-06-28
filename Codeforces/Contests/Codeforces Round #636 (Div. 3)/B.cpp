#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, j, t, n=0, i=0, even=0, odd=-1, a, flag=0, sum1=0, sum2=0;;
    cin >> T;
    for(j=0;j<T;j++)
    {
        cin >> t;
        n=0, i=0, even=0, odd=-1, a, flag=0, sum1=0, sum2=0;
        n = t/2;
        int A[n], B[n];
        for(i=0;i<n;i++)
        {
            even = even + 2;
            sum1 = sum1 + even;
            A[n] = even;
            odd = odd + 2;
            if(i!=(n-1))
            {
                a = even-1;
                sum2 = sum2 + a;
                B[n] = a;
                flag++;
            }
            else
            {
                odd = even + flag;
                sum2 = sum2 + odd;
                B[n] = odd;
            }
        }
        if(sum1==sum2)
        {
            cout << "YES\n";
            for(i=0;i<n;i++)
            {
                cout << A[n] << " ";
            }
            for(i=0;i<n;i++)
            {
                cout << B[n] << " ";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}

