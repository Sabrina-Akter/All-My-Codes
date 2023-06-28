#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, j, n, x=0;
    scanf("%d", &t);
    while(t--)
    {
        x++;
        string s;
        vector <char> c;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                n = 0;
            }
            if(s[i]=='1')
            {
                n = 1;
            }
            if(s[i]=='2')
            {
                n = 2;
            }
            if(s[i]=='3')
            {
                n = 3;
            }
            if(s[i]=='4')
            {
                n = 4;
            }
            if(s[i]=='5')
            {
                n = 5;
            }
            if(s[i]=='6')
            {
                n = 6;
            }
            if(s[i]=='7')
            {
                n = 7;
            }
            if(s[i]=='8')
            {
                n = 8;
            }
            if(s[i]=='9')
            {
                n = 9;
            }
            for(j=0;j<n;j++)
            {
                c.push_back('(');
            }
            c.push_back(s[i]);
            for(j=0;j<n;j++)
            {
                c.push_back(')');
            }
        }
        for(i=0;i<c.size()-1;i++)
        {
            if((c[i]==')') && (c[i+1]=='('))
            {
                c.erase(c.begin()+i);
                c.erase(c.begin()+i);
                i = i - 2;
            }
        }
        cout << "Case #" << x << ": ";
        for(i=0;i<c.size();i++)
        {
            cout << c[i];
        }
        cout << "\n";
        c.clear();
    }
}
