#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        long long a, b, new_b, x;
        cin >> a >> b;
        long long N[5];
        N[1] = (a*a*a*a)%10;
        N[2] = (a)%10;
        N[3] = (a*a)%10;
        N[4] = (a*a*a)%10;
        new_b = b%4;
        x = N[new_b+1];
        cout << x << endl;
    }
    return 0;
}
