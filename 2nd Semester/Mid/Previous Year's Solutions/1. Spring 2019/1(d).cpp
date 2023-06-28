#include <bits/stdc++.h>

using namespace std;

class MATH
{
    public:
    int ABS(int x)
    {
        return abs(x);
    }
    double ABS(double y)
    {
        return fabs(y);
    }
    long ABS(long z)
    {
        return labs(z);
    }
};

int main()
{
    MATH ob;

    cout << ob.ABS(-2) << " " << ob.ABS(-2.2) << " " << ob.ABS(-2L) << endl;

    return 0;
}
