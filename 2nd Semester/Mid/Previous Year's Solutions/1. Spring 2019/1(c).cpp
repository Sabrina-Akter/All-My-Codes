#include <iostream>
#include <string>

using namespace std;

void demo()
{
    static int count = 0; //static shoriye nileh output always 0 ashbe.
    cout << count << " ";
    count++;
}

int main()
{
    for(int i = 0;i<5;i++)
    {
        demo();
    }
    return 0;
}
