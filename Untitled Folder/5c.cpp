#include<iostream>
using namespace std;

int main()
{
    class COPY{
        int x, y, z;
    public:
        COPY(int a, int b, int c)
        {
            x = a;
            y = b;
            z = c;
        }
        friend ostream& operator <<(ostream& stream, COPY ob);
    };

    ostream& operator <<(ostream& stream, COPY ob);
    {
        stream << ob.x << "  " << ob.y << " " << ob.z;
        return stream;
    }
}
int main()
{
    COPY abc(1,2,3);
    cout << abc;
    return 0;
}
