#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t,q,i,x,y,f1=0,f2=0,w;
    long double z;
    vector <long long> N, M;

    cin >> t >> q;

    for(i=0;i<t;i++)
    {
        cin >> x;
        if(x==0)
        {
            f1 = 1;
        }
        if(x==q)
        {
            f2 = 1;
        }
        N.push_back(x);
    }

    sort(N.begin(), N.end());

    if(t>1)
    {
            for(i=1;i<t;i++)
            {
                y=N[i]-N[i-1];
                M.push_back(y);
            }

            sort(M.begin(), M.end());

            z = (M[t-2])/2.0;

            if((f1==0) && (f2==1))
            {
                if(N[0]>z)
                {
                    z = N[0];
                }
            }
            else if((f1==1) && (f2==0))
            {
                w = q - N[t-1];
                if(w>z)
                {
                    z = w;
                }
            }
            else if((f1==0) && (f2==0))
            {
                w = q - N[t-1];
                if(w>z)
                {
                    z = w;
                }
                else if(N[0]>z)
                {
                    z = N[0];
                }
            }
    }
    else
    {
        w = q - N[t-1];
        if(N[t-1]>w)
        {
            z = N[t-1];
        }
        else
        {
            z = w;
        }
    }

    cout << fixed << setprecision(10) << z << endl;

    return 0;
}

