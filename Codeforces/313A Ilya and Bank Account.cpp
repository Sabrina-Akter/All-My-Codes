#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i;
    string s, a="", b="";
    cin >> s;
    if(s[0]!='-')
    {
        cout << s << endl;
    }
    else
    {
        for(i=0;i<s.size();i++)
        {
            if(i!=s.size()-1)
            {
                a = a + s[i];
            }
            if(i!=s.size()-2)
            {
                b = b + s[i];
            }
        }
        if(a<=b)
        {
            if(a=="-0")
            {
                a = "0";
            }
            if(b=="-0")
            {
                b = "0";
            }
            cout << a << endl;
        }
        else
        {
            if(a=="-0")
            {
                a = "0";
            }
            if(b=="-0")
            {
                b = "0";
            }
            cout << b << endl;
        }
    }
    return 0;
}
