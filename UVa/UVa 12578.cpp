#include <bits/stdc++.h>
using namespace std;

int main()
{
    double t,n,i,j,w,r,A,R;
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin >> n;
        r = n/5;
        w = (n/5)*3;
        R = M_PI * r * r;
        A = (n * w) - R;
        cout << fixed;
        cout << setprecision(2);
        cout << R << " " << A << endl;
    }
    return 0;
}
