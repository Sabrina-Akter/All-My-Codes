#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n, j, sum, x;
    char A[20], B[20], C[20];
    cin >> t;
    for(i=0;i<t;i++)
    {
        sum = 0;
        cin >> n;
        int N[n];
        for(j=0;j<n;j++)
        {
            cin >> A;
            if(strcmp(A,"SAME")==0)
            {
                cin >> B;
                if(strcmp(B,"AS")==0)
                {
                    cin >> x;
                    sum = sum + N[x-1];
                    N[j] = N[x-1];
                }
            }
            else if(strcmp(A,"LEFT")==0)
            {
                sum = sum - 1;
                N[j] = -1;
            }
            else if(strcmp(A,"RIGHT")==0)
            {
                sum = sum + 1;
                N[j] = +1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
