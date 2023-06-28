#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, a, b, n, i, p, f=0;
    cin >> t;
    while(t--)
    {
        f = 0;
        cin >> a >> b >> n;
        if(n==1)
        {
            cout << "YES\n";
        }
        else if(a%2!=0 && b%2!=0 && n>1)
        {
            cout << "NO\n";
        }
        else
        {
            for(i=1;i<100000;i++)
            {
                if(a%2==0 && b%2==0)
                {
                    if(a>=b)
                    {
                        a = a/2;
                    }
                    else
                    {
                        b = b/2;
                    }
                    p = pow(2,i);
                }
                else if(a%2==0)
                {
                    a = a/2;
                    p = pow(2,i);
                }
                else if(b%2==0)
                {
                    b = b/2;
                    p = pow(2,i);
                }
                if(p>=n)
                {
                    cout << "YES\n";
                    break;
                }
                else if(a%2!=0 && b%2!=0)
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
