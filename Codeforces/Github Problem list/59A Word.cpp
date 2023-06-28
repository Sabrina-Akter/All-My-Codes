#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, u=0, l=0;
    string s;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        if(isupper(s[i])==1)
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if(u>l)
    {
        for(i=0;i<s.size();i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    else
    {
        for(i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}

