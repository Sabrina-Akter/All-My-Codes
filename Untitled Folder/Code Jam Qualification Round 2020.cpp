#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n, j, x, y, sum, f, c1, c2, c3, c4, Case = 0;
    cin >> t;
    for(x=0;x<t;x++)
    {
        Case++;
        sum = 0, c1=0, c2=0, c3=0, c4=0;
        cin >> n;
        int N[n][n], M[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin >> N[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            sum = sum + N[i][i];
        }
        for(i=0;i<n;i++)
        {
            f = 0;
            for(j=0;j<n;j++)
            {
                if((count(*(N+i),*(N+i+1), N[i][j]))>1)
                {
                    f = 1;
                    break;
                }
            }
            if(f==1)
            {
                c3++;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                M[i][j]=N[j][i];
            }
        }
        for(i=0;i<n;i++)
        {
            f = 0;
            for(j=0;j<n;j++)
            {
                if((count(*(M+i),*(M+i+1), M[i][j]))>1)
                {
                    f = 1;
                    break;
                }
            }
            if(f==1)
            {
                c4++;
            }
        }
        cout << "Case #" << Case << ": " << sum << " " << c3 << " " << c4 << endl;
    }
    return 0;
}

