#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n, m, a=0, b=0, c=0, f=0, g=0, x=0;
    cin >> t;
    vector <int> N, M;
    for(i=0;i<t;i++)
    {
        cin >> n;
        N.push_back(n);
        M.push_back(0);
    }
    a = count(N.begin(), N.end(),1);
    b = count(N.begin(), N.end(),2);
    c = count(N.begin(), N.end(),3);
    m = min(min(a,b),min(b,c));
    cout << m << endl;
    for(i=0;i<t;i++)
    {
        if(N[i]==1 && M[i]==0 && x==0)
        {
            cout << i << " ";
            M[i]=1;
            f++;
            x = 1;
        }
        if(N[i]==2 && M[i]==0 && x==1)
        {
            cout << i << " ";
            M[i]=1;
            f++;
            x = 2;
        }
        if(N[i]==3 && M[i]==0 && x==2)
        {
            cout << i << " ";
            M[i]=1;
            f++;
            x = 0;
        }

        if(f==3)
        {
            cout << endl;
            f = 0;
            i = 0;
            g++;
        }
        if(g==m)
        {
            break;
        }
    }
    return 0;
}
