#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, s=0, x=0;
    cin >> n;
    int I[n];
    for(i=0;i<n;i++)
    {
        cin >> I[i];
        if(I[i]<0)
        {
            if(s==0)
            {
                x++;
            }
            else
            {
                s = s + I[i];
                if(s<0)
                {
                    s = 0;
                    x++;
                }
            }
        }
        else if(I[i]>0)
        {
            s = s + I[i];
        }
    }
    cout << x << endl;
    return 0;
}
