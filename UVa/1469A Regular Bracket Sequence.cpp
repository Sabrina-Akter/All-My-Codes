#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, i, a, b;
    cin >> t;
    while(t--)
    {
        vector <char> c;
        string s;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            c.push_back(s[i]);
        }
        while(1)
        {
            a = c.size();
            if(c.size()==0)
            {
                break;
            }
            for(i=0;i<c.size()-1;i++)
            {
                if((c[i]=='(' && c[i+1]==')') || (c[i]=='?' && c[i+1]=='?') || (c[i]=='?' && c[i+1]==')'))
                {
                    c.erase(c.begin()+i);
                    c.erase(c.begin()+i);
                    break;
                }
            }
            b = c.size();
            if(a==b)
            {
               break;
            }
        }
        while(1)
        {
            a = c.size();
            if(c.size()==0)
            {
                break;
            }
            for(i=0;i<c.size()-1;i++)
            {
                if(c[i]=='(' && c[i+1]=='?')
                {
                    c.erase(c.begin()+i);
                    c.erase(c.begin()+i);
                    break;
                }
            }
            b = c.size();
            if(a==b)
            {
               break;
            }
        }
        if(c.size()==0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
