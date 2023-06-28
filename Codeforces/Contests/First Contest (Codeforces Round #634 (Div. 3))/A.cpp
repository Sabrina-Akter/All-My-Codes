#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, i, n, x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n%2!=0)
        {
            x = n - ((n/2)+1);
        }
        else if(x%2==0)
        {
            x = n - (n/2) - 1;
        }
        cout << x << endl;
        n = 0;
        x = 0;
    }
    return 0;
}
