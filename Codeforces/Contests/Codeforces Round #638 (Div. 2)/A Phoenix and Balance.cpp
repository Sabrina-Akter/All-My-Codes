#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, h, sum1, sum2, i, j, h1, h2, dif;
    cin >> t;
    for(i=0;i<t;i++)
    {
        sum1=0, sum2=0, h1=0, h2=0;
        cin >> n;
        h = n/2;
        for(j=1;j<n;j++)
        {
            if(h1==h-1)
            {
                sum1 = sum1 + pow(2,n);
                break;
            }
            else if(h1<h)
            {
                sum1 = sum1 + pow(2,j);
                h1++;
            }
        }
        for(;j<n;j++)
        {
            if(h2==h-1)
            {
                sum2 = sum2 + pow(2,j);
                break;
            }
            else if(h2<h)
            {
                sum2 = sum2 + pow(2,j);
                h2++;
            }
        }
        dif = sum1 - sum2;
        cout << dif << endl;
    }
    return 0;
}

