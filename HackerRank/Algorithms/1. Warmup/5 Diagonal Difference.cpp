#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, sum1=0, sum2=0, x;
    cin >> n;
    int ar[n][n];
    x = n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> ar[i][j];
            if(i==j)
            {
                sum1 = sum1 + ar[i][j];
            }
            if(j==x)
            {
                sum2 = sum2 + ar[i][j];
            }
        }
        x--;
    }
    cout << abs(sum1-sum2) << endl;
    return 0;
}
