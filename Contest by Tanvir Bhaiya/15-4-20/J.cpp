#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t=0, i, s=0, n, l, f=0;
    vector <long long> N;
    cin >> t;
    long long x[t+1];

    for(i=0;i<t+1;i++)
    {
        if(i!=t)
        {
            cin >> x[i];
        }
        if(i==t)
        {
            x[t] = x[t-1] + 1;
        }
        if(i!=0)
        {
            if(x[i]<=x[i-1])
            {
                s++;
            }
            else if(x[i]>x[i-1])
            {
                if(s>f)
                {
                    f = s;
                }
                s = 0;
            }
        }
    }
    cout << f << endl;
    return 0;
}
