#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,m, n = 12345;
    vector <char> c;
    char x;
    while(1)
    {
        m = n%10;
        if(m==0)
        {
            x = '0';
        }
        else if(m==1)
        {
            x = '1';
        }
        else if(m==2)
        {
            x = '2';
        }
        else if(m==3)
        {
            x = '3';
        }
        else if(m==4)
        {
            x = '4';
        }
        else if(m==5)
        {
            x = '5';
        }
        c.push_back(x);
        n = n/10;
        if(n==0)
        {
            break;
        }
    }
    for(i=0;i<c.size();i++)
    {
        cout << c[i];
    }
}
