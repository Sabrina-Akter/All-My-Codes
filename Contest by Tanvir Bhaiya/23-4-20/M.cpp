#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, sum;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        sum = a + b + c;
        if(sum==180)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
