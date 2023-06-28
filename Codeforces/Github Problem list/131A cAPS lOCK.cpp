#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int siz, i, sum=0, p=0;
    char c;
    string s;
    cin >> s;
    siz = s.size();
    for(i=0;i<siz;i++)
    {
        if(isupper(s[i]))
        {
            sum++;
        }
        if(islower(s[0]))
        {
            p = 1;
        }
    }
    if(p==1 && sum==siz-1)
    {
        for(i=0;i<siz;i++)
        {
            if(i==0)
            {
                c = toupper(s[i]);
                cout << c;
            }
            else
            {
                c = tolower(s[i]);
                cout << c;
            }
        }
    }
    else if(sum==siz)
    {
        for(i=0;i<siz;i++)
        {
                c = tolower(s[i]);
                cout << c;
        }
    }
    else
    {
        cout << s << endl;
    }
    return 0;
}
