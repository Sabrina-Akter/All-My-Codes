#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, t, a, b, x;
    cin >> n >> m >> t;
    b = 0;
    while(m--)
    {
        x = b;
        cin >> a >> b;
        n = n - (a-x) + (b-a);
        cout << "n = " << n << endl;
    }
    n = n - (t-b);
    cout << "n = " << n << endl;
    if(n==0)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
    return 0;
}
