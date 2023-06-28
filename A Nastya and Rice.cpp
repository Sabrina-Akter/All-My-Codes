#include <bits/stdc++.h>
using namespace std;

int main()
{
    double t, n, a, b, c, d, a_b1, a_b2, c_d1, c_d2, s, x, i, flag=0, y, y2=0;
    int z;
    cin >> t;
    while(t--)
    {
        flag = 0;
        y = 0;
        y2 = 0;
        vector <int> N;
        cin >> n >> a >> b >> c >> d;
        a_b1 = a - b;
        a_b2 = a + b;
        c_d1 = c - d;
        c_d2 = c + d;

        for(i=a_b1;i<=a_b2;i++)
        {
            N.push_back(i);
        }
        for(i=c_d2;i>=c_d1;i--)
        {
            x = i/n;
            z = i/n;
            if(x!=z)
            {
                x = z;
                y = count(N.begin(), N.end(), x);
                y2 = count(N.begin(), N.end(), x+1);
                if(y>0 && y2>0)
                {
                    flag = 1;
                    break;
                }
            }
            else if(x==z)
            {
                y = count(N.begin(), N.end(), x);
                if(y>0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}
