#include <bits/stdc++.h>
using namespace std;

int main()
{
    double  n, x, i, sum=0, f;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        sum = sum + x;
    }
    f = sum/n;
    cout << fixed << setprecision(12) << f << endl;
    return 0;
}
