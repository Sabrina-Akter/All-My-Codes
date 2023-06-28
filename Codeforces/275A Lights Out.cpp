#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j, a[3][3], b[3][3]={0}, sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin >> a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0 && j==0)
            {
                sum = a[i][j] + a[i+1][j] + a[i][j+1];
                if(sum%2==0)
                {
                    b[i][j] = 1;
                }
                else
                {
                    b[i][j] = 0;
                }
            }
            else if(i==0 && j==1)
            {
                sum = a[i][j] + a[i+1][j] + a[i][j+1] + a[i][j-1];
                if(sum%2==0)
                {
                    b[i][j] = 1;
                }
                else
                {
                    b[i][j] = 0;
                }
            }
            else if(i==0 && j==2)
            {
                sum = a[i][j] + a[i+1][j] + a[i][j-1];
                if(sum%2==0)
                {
                    b[i][j] = 1;
                }
                else
                {
                    b[i][j] = 0;
                }
            }
            else if(i==1 && j==0)
            {
                sum = a[i][j] + a[i-1][j] + a[i+1][j] + a[i][j+1];
                if(sum%2==0)
                {
                    b[i][j] = 1;
                }
                else
                {
                    b[i][j] = 0;
                }
            }
            else if(i==1 && j==1)
            {
                sum = a[i][j] + a[i-1][j] + a[i+1][j] + a[i][j+1] + a[i][j-1];
                if(sum%2==0)
                {
                    b[i][j] = 1;
                }
                else
                {
                    b[i][j] = 0;
                }
            }
            else if(i==1 && j==2)
            {
                sum = a[i][j] + a[i-1][j] + a[i+1][j] + a[i][j-1];
                if(sum%2==0)
                {
                    b[i][j] = 1;
                }
                else
                {
                    b[i][j] = 0;
                }
            }
            else if(i==2 && j==0)
            {
                sum = a[i][j] + a[i-1][j] + a[i][j+1];
                if(sum%2==0)
                {
                    b[i][j] = 1;
                }
                else
                {
                    b[i][j] = 0;
                }
            }
            else if(i==2 && j==1)
            {
                sum = a[i][j] + a[i-1][j] + a[i][j+1] + a[i][j-1];
                if(sum%2==0)
                {
                    b[i][j] = 1;
                }
                else
                {
                    b[i][j] = 0;
                }
            }
            else if(i==2 && j==2)
            {
                sum = a[i][j] + a[i-1][j] + a[i][j-1];
                if(sum%2==0)
                {
                    b[i][j] = 1;
                }
                else
                {
                    b[i][j] = 0;
                }
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout << b[i][j];
        }
        cout << endl;
    }
    return 0;
}
