#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, a, b, c, d, x, y, x1, y1, x2, y2, A, B;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        A = x-a+b;
        B = y-c+d;
        if((x1==x2 && x1==A) && (y1==y2 && y1==B))
        {
            cout << "No\n";
        }
        else if((A>=x1 && A<=x2) && (B>=y1 && B<=y2))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}
