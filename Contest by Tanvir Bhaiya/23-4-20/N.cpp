#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n1, n2, n, c, h, f_c, f_h;
    cin >> t;
    while(t--)
    {
        f_c = 0;
        f_h = 0;
        cin >> n1 >> n2;
        c = n2/2;
        h = n2/10;
        while(n1--)
        {
            cin >> n;
            if(n>=c)
            {
                f_c++;
            }
            else if(n<=h)
            {
                f_h++;
            }
        }
        if(f_c==1 && f_h==2)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    return 0;
}
