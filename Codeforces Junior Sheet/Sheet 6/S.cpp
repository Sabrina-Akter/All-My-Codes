#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c, s;
    cin >> a >> b >> c;
    if(((a+b)>c) && ((b+c)>a) && ((a+c)>b))
    {
        cout << "Valid\n";
        s = (a+b+c)/2;
        cout << sqrt(s*((s-a)*(s-b)*(s-c)));
    }
    else
    {
        cout << "Invalid\n";
    }
    return 0;
}
