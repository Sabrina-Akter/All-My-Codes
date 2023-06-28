#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i = 3, ar[]={-2,0,2}, sum=0;
    map <char, int> m;
    m['A'] = 0, m['B'] = 0, m['C'] = 0;
    while(i--)
    {
        string s;
        cin >> s;
        if(s[1]=='>')
        {
            m[s[0]]++;
            m[s[2]]--;
        }
        else if(s[1]=='<')
        {
            m[s[0]]--;
            m[s[2]]++;
        }
    }
    for(i=0;i<3;i++)
    {
        if(m['A']==ar[i])
        {
            sum++;
        }
        else if(m['B']==ar[i])
        {
            sum++;
        }
        else if(m['C']==ar[i])
        {
            sum++;
        }
    }
    if(sum==3)
    {
        for(i=0;i<3;i++)
        {
            if(m['A']==ar[i])
            {
                cout << "A";
            }
            else if(m['B']==ar[i])
            {
                cout << "B";
            }
            else if(m['C']==ar[i])
            {
                cout << "C";
            }
        }
    }
    else
    {
        cout << "Impossible\n";
    }
    return 0;
}
