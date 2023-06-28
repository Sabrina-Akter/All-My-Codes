#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, a, b, i, j, k, n, sum;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> a >> b;
        n = b/2;
        char ar[a][b];
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                cin >> ar[i][j];
            }
        }
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                for(k=0;k<=n;k++)
                {
                    if(j-k<0 || j+k>=b || j-k+1<0 || j+k-1>=b)
                    {
                        continue;
                    }
                    if((ar[i][j]=='*') && (k==0))
                    {
                        sum++;
                    }
                    else if((k!=0) && (ar[i][j]=='*') && (ar[i][j-k]=='*') && (ar[i][j+k]=='*') && (ar[i-k][j]=='*') && (ar[i-1][j-k+1]=='*') && (ar[i-1][j+k-1]=='*'))
                    {
                        sum++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
