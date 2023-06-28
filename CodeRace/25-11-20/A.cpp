#include<bits/stdc++.h>
using namespace std;

int main()
{
    float r, x, f, y, R;
    int n;
    cin >> r;
    x = r*3.14159265359*2;
    n = x;
    R = n;
    f = (x - n)*10;
    n = f;
    cout << R << "." << n << endl;
    return 0;
}
