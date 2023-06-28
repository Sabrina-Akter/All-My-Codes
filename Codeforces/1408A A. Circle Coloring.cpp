#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n, i, j, f=-1, z=0;
        cin >> n;
        long long ar[3][n], x[n];
        for(i=0;i<3;i++)
        {
            for(j=0;j<n;j++)
            {
                cin >> ar[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<3;j++)
            {
                if((ar[j][i]!=z))
                {
                    f++;
                    if(f>=n)
                    {
                        break;
                    }
                    else
                    {
                        x[f] = ar[j][i];
                        if(x[0]==x[n-1])
                        {
                            f--;
                            continue;
                        }
                        z = ar[j][i];
                        break;
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            cout << x[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
