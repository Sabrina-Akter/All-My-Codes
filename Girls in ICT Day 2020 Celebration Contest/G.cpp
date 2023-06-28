#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, j, a, b, c, a_b, a_c, b_c, x=0;
    cin >> t;
    vector <long long> N;
    for(i=0;i<t;i++)
    {
        cin >> n;
        N.push_back(n);
    }
    sort(N.begin(), N.end());
    for(i=0;i<t-2;i++)
    {
        x = 0;
        a = N[i];
        b = N[i+1];
        c = N[i+2];
        a_b = N[i] + N[i+1];
        a_c = N[i] + N[i+2];
        b_c = N[i+1] + N[i+2];
        if(a_b>c)
        {
            x++;
        }
        if(a_c>b)
        {
            x++;
        }
        if(b_c>a)
        {
            x++;
        }
        if(x==3)
        {
            break;
        }
    }
    if(x==3)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}

