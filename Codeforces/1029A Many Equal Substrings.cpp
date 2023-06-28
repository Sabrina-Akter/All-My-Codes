#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, i, j, first, last;
    string s, s1="";
    cin >> a >> b;
    cin >> s;
    for(i=0;i<a;i++)
    {
        if((s[i]!=s[a-i-1]) || (i==a-i-1))
        {
            first = i;
            last = a-i-1;
            break;
        }
        else
        {
            s1 = s1 + s[i];
        }
    }
    for(i=0;i<b;i++)
    {
        if(i==0)
        {
            cout << s;
        }
        for(j=first;j<=last;j++)
        {

            if(i!=0)
            {
                cout << s[j];
            }
        }
        if(i!=0)
        {
            cout << s1;
        }
    }
    return 0;
}
