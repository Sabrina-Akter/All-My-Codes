#include <iostream>
using namespace std;

class Line {
        double length;
    public:
        void setLength(double len);
        double getLength();
        Line();
        ~Line();
};

Line::Line()
{
    cout << "Object created." << endl;
}
Line::~Line()
{
    cout << "Object is being deleted." << endl;
}
void Line::setLength(double len)
{
    length = len;
}
double Line::getLength()
{
    return length;
}

int main()
{
    Line line;
    line.setLength(6.0);
    cout << "Length of line: " << line.getLength() << endl;
    return 0;
}
