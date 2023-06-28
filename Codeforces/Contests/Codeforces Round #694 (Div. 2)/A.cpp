#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, a, i, MIN;
    double x, max=0, min=0;
    cin >> t;
    while(t--)
    {
        max = 0, min = 0;
        cin >> n >> a;
        for(i=0;i<n;i++)
        {
            cin >> x;
            max = max + ceil(x/a);
            min = min + x;
        }
        min = ceil(min/a);
        MIN = min;
        MAX = max;
        cout << MIN << " " << MAX << endl;
    }
    return 0;
}
