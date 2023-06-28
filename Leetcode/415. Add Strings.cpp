#include <bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2) {
    if(num2.size()>num1.size())
    {
        swap(num1, num2);
    }
    string c;
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    int i, carry=0;
    for(i=0;i<num1.size();i++)
    {
        int x=num1[i]-48, y;
        if(i>=num2.size()) 
        {
            y=0;
        }
        else
        {
            y=num2[i]-48;
        }
        int sum = x+y, last;
        sum+=carry;
        if(sum>=10)
        {
            carry=1;
        }
        else
        {
            carry=0;
        }
        last = sum%10;
        c+=(last+48);
    }
    if(carry==1)
    {
        c+=(carry+48);
    }
    reverse(c.begin(),c.end());
    cout << c << endl;
    return c;    
    }

int main()
{
    string num1 = "0", num2 = "0";
    addStrings(num1, num2);
    return 0;
}