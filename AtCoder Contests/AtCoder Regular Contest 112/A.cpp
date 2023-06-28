#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long t, a, b, x, m, n;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        x = b - a;
        if(x>=a)
        {
            m = b - a;
            n = (m-a)+1;
            cout << (n*(n+1))/2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
