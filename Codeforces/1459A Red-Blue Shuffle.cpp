#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, t, n, R, B;
    cin >> t;
    while(t--)
    {
        R=0, B=0;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
        for(i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                R++;
            }
            else if(b[i]>a[i])
            {
                B++;
            }
        }
        if(R>B)
        {
            cout << "RED\n";
        }
        else if(B>R)
        {
            cout << "BLUE\n";
        }
        else
        {
            cout << "EQUAL\n";
        }
    }
    return 0;
}
