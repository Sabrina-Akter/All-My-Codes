#include <iostream>
using namespace std;

void copy(int&a, int&b, int&c)
{
    a*=2;
    b*=2;
    c*=2;
}
/*void copy(int a, int b, int c)
{
    a=a*2;
    b=b*2;
    c=c*2;
}*/
//Uporer moto korle output ashbe x = 1, y = 3, z = 7.

int main()
{
    int x=1,y=3,z=7;
    copy(x,y,z);
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    return 0;
}
