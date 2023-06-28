#include<iostream>
#include<sstream>
#include <string>
using namespace std;

int main()
{

int int_val = 0;
string str_val;
cout << "Enter a string value:\n";
cin >> str_val;
stringstream obj;
obj << str_val;
obj >> int_val;
cout << "Integer representation of the input string value:\n";
cout << int_val;

return 0;
}
