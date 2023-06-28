#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];
    int flag = 0, i, l;
    cin >> s;
    l = strlen(s);
    for(i=0;i<(l-6);i++)
    {
        if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0' && s[i+6]=='0')
        {
            flag = 1;
        }
        else if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1' && s[i+6]=='1')
        {
            flag = 1;
        }
    }
    if(flag==0)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
    return 0;
}
