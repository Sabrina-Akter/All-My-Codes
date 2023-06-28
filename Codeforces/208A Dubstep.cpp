#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int i, x=1;
    string s;
    cin >> s;
    for(i=0;i<s.size();)
    {
        if((s[i]=='W') && (s[i+1]=='U') && (s[i+2]=='B') && (x==1))
        {
            i = i+3;
            continue;
        }
        else
        {
            cout << s[i];
            x=0;
            i++;
        }
        if((s[i]=='W') && (s[i+1]=='U') && (s[i+2]=='B') && (x==0))
        {
            cout << " ";
            x=1;
            i = i+3;
        }
    }
    return 0;
}
