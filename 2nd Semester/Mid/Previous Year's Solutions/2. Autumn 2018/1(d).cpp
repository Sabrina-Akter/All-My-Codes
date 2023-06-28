#include <iostream>
using namespace std;

class Test{
    int x;
};

int main()
{
    Test t;
    cout << t.x;
    return 0;
}
}

//line 5 error: 'int Test::x' is private
//line 11 error: within this context
//line 14 error: expected declaration before '}' token
