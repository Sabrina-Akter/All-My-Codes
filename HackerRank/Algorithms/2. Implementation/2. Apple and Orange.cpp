#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s, t, a, b, m, n, i, sum, sum1=0, sum2=0;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    int ar1[m], ar2[n];
    for(i=0;i<m;i++)
    {
        cin >> ar1[i];
        sum = ar1[i] + a;
        if(sum>=s && sum<=t)
        {
            sum1++;
        }
    }
    for(i=0;i<n;i++)
    {
        cin >> ar2[i];
        sum = ar2[i] + b;
        if(sum>=s && sum<=t)
        {
            sum2++;
        }
    }
    cout << sum1 << "\n" << sum2 << endl;
    return 0;
}
