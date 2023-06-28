#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int x=0, i, l = s.size();

    for(i=0;i<l;i++)
    {
        if(x==0 && s[i]=='h')
        {
            x=1;
        }
        else if(x==1 && s[i]=='e')
        {
            x=2;
        }
        else if(x==2 && s[i]=='l')
        {
            x=3;
        }
        else if(x==3 && s[i]=='l')
        {
            x=4;
        }
        else if(x==4 && s[i]=='o')
        {
            x=5;
            break;
        }
    }
    if(x==5)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}


