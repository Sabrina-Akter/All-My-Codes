#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a, b, c, sum, i, f=0;
    a = count(s.begin(), s.end(), '1');
    b = count(s.begin(), s.end(), '2');
    c = count(s.begin(), s.end(), '3');
    sum = a+b+c;
        for(i=1;i<=a;i++)
        {
            f++;
            if(f==sum)
            {
                cout << "1";
            }
            else
            {
                cout << "1+";
            }
        }
        for(i=1;i<=b;i++)
        {
            f++;
            if(f==sum)
            {
                cout << "2";
            }
            else
            {
                cout << "2+";
            }
        }
        for(i=1;i<=c;i++)
        {
            f++;
            if(f==sum)
            {
                cout << "3";
            }
            else
            {
                cout << "3+";
            }
        }

    return 0;
}
