#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, i, sum=0;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;
    x = s.size();
    for(i=0;i<x;i++)
    {
        if(s[i]=='1')
        {
            sum = sum + a;
        }
        else if(s[i]=='2')
        {
            sum = sum + b;
        }
        else if(s[i]=='3')
        {
            sum = sum + c;
        }
        else if(s[i]=='4')
        {
            sum = sum + d;
        }
    }
    cout << sum << endl;
    return 0;
}
