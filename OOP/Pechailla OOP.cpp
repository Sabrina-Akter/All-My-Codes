#include <iostream>
using namespace std;

class Question
{
    private:
        string x;
    public:
        void set_string()
        {
            string s = "Ki obostha, bro?";
            x = s;
        }
        void get_string()
        {
            cout << x << endl;
        }
};

int main()
{
    Question Q;
    Q.set_string();
    Q.get_string();
    return 0;
}
