#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int p, q, s, i, j, n, S1, S2, f=0;
    vector <int> v1, v2;
    cin >> p >> q >> s;

    for(i=1;i<=10000;i++)
    {
        n = p*i;
        if(n>s)
        {
            break;
        }
        v1.push_back(n);
    }
    for(i=1;i<=10000;i++)
    {
        n = q*i;
        if(n>s)
        {
            break;
        }
        v2.push_back(n);
    }
    S1 = v1.size();
    S2 = v2.size();
    for(i=0;i<S1;i++)
    {
        for(j=0;j<S2;j++)
        {
            if(v1[i]==v2[j])
            {
                f = 1;
                break;
            }
        }
    }
    if(f==0)
    {
        cout << "no\n";
    }
    else if(f==1)
    {
        cout << "yes\n";
    }
    return 0;
}
