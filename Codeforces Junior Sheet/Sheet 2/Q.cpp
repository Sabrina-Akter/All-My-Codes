#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        while(1)
        {
            cout << n%10 << " ";
            n = n/10;
            if(n==0)
            {
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
