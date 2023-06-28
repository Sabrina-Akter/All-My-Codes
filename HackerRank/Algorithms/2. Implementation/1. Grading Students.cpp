#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    while(t--)
    {
        cin >> n;
        m = (((n+5)/5)*5);
        if(n<38)
        {
            cout << n << endl;
        }
        else if(m-n<=2)
        {
            cout << m << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}
