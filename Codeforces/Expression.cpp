#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, z, a, b, c, d, e, f, g;

    cin >> x >> y >> z;

    a = x+y+z;
    a = max(a,(x*y*z));
    a = max(a,(x+(y*z)));
    a = max(a,((x*y)+z));
    a = max(a,((x+y)*z));
    a = max(a,(x*(y+z)));

    cout << a << endl;

}
