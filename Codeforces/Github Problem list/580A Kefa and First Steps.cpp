#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, c=0,x=0;
    cin >> t;
    vector <long long> N;
    for(i=0;i<t;i++)
    {
        cin >> n;
        N.push_back(n);
    }
    N.push_back(0);
    for(i=1;i<t+1;i++)
    {
        if(N[i]>=N[i-1])
        {
            c++;
        }
        else
        {
            if(c>=x)
            {
                x = c;
            }
            c = 0;
        }
    }
    cout << x+1 << endl;
    return 0;
}

