#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3], b[3], i, j, a_p=0, b_p=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0)
            {
                cin >> a[j];
            }
            else
            {
                cin >> b[j];
            }
        }
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            a_p++;
        }
        else if(a[i]<b[i])
        {
            b_p++;
        }
    }
    cout << a_p << " " << b_p << endl;
}
