#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, x, N;
    double sum, total = 0;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n;
        long long ar1[n+1], ar2[n+1];
        for(i=0;i<n;i++)
        {
            cin >> ar1[i];
            cin >> ar2[i];
        }
        ar1[n] = ar1[0];
        ar2[n] = ar2[0];
        for(i=0;i<n;i++)
        {
            sum = sum + ((ar1[i]*ar2[i+1]) - (ar1[i+1]*ar2[i]));
        }
        sum = sum/2;
        total = total + fabs(sum);
    }
    N = total;
    cout << N;
    return 0;
}
