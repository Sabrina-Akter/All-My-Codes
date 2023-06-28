#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y, a, b, exp=0;
    cin >> x >> y >> a >> b;
    while(1)
    {
        /*x = x*a;
        cout << "str = " << x << endl;
        if(x>=y)
        {
            cout << exp << endl;
            break;
        }
        else
        {
            exp++;
        }*/
        x = x+b;
        //cout << "str = " << x << endl;
        if(x>=y)
        {
            cout << exp << endl;
            break;
        }
        else
        {
            exp++;
        }
    }
    return 0;
}
