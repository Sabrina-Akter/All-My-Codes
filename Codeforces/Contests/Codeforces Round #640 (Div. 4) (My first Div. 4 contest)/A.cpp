#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double z;
    int t, n, x, c, i, j;
    vector <int> v;
    cin >> t;
    while(t--)
    {
        c = 0;
        x = 1;
        cin >> n;
        if((n%10==0) || (n/10==0))
        {
            cout << "1\n" << n << endl;
        }
        else
        {
            while(1)
            {
                c++;
                x = n/10;
                for(j=10;j>=1;j--)
                {
                    z = 100*j;
                    if((x*10)>=z)
                    {
                        v.push_back(z);
                    }
                }
                n = n - (x*10);
                cout << "n = " << n << endl;
                if(x==0)
                {
                    cout << c << endl;
                    for(i=0;i<c;i++)
                    {
                        cout << v[i] << " ";
                    }
                    cout << endl;
                    break;
                }
                v.push_back(n);
            }
            v.clear();
        }
    }
    return 0;
}
