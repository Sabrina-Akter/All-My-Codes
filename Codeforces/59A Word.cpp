#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, i, U=0, L=0;
    char c[200];
    cin >> c;
    s = strlen(c);
    for(i=0;i<s;i++)
    {
        if(isupper(c[i])==1)
        {
            U++;
        }
        else
        {
            L++;
        }
    }
    if(U>L)
    {
        for(i=0;i<s;i++)
        {
            c[i] = toupper(c[i]);
            cout << c[i];
        }
    }
    else
    {
        for(i=0;i<s;i++)
        {
            c[i] = tolower(c[i]);
            cout << c[i];
        }
    }
    return 0;
}
