#include <iostream>
using namespace std;

int main()
{
    int t, n, i, j, k, flag;
    long long int m;

    cin >> t;

    for(i=0;i<t;i++)
    {
        cin >> n;
        int A[n];
        for(j=0;j<n;j++)
        {
            cin >> m;
            A[j]=m;
        }
        flag = 0;
        for(j=0;j<n;j++)
        {
            for(k=(j+1);k<n;k++)
            {
                if(k==n)
                {
                    break;
                }
                if((A[j]+A[k])==(A[j]*A[k]))
                {
                    flag++;
                }
            }
        }
        cout << flag << endl;
    }
    return 0;
}
