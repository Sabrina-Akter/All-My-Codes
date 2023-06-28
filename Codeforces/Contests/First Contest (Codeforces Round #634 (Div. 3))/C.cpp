#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x, s, a;
    cin >> t;
    while(t--)
    {
        vector <int> N, V;
        cin >> a;
        while(a--)
        {
            cin >> n;
            N.push_back(n);
            x = count(N.begin(), N.end(), n);
            V.push_back(x);
        }
        sort(V.begin(), V.end());
        s = V.size();
        if(s==1)
        {
            cout << "0" << endl;
        }
        else if((V[s-1]==1) && (s>1))
        {
            cout << "1" << endl;
        }
        else if(((V[s-1])*2)<=s)
        {
            cout << V[s-1] << endl;
        }
        else if(((V[s-1])*2)>s)
        {
            cout << V[s-1]-1 << endl;
        }
        a = 0;
    }


    return 0;
}
