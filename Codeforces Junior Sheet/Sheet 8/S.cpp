#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, i, j, sum=0;
    string word="";
    cin >> n >> k;
    for(i=0;i<=k;i++)
    {
        if(i==0)
        {
            word = word + '0';
        }
        if(i==1)
        {
            word = word + '1';
        }
        if(i==2)
        {
            word = word + '2';
        }
        if(i==3)
        {
            word = word + '3';
        }
        if(i==4)
        {
            word = word + '4';
        }
        if(i==5)
        {
            word = word + '5';
        }
        if(i==6)
        {
            word = word + '6';
        }
        if(i==7)
        {
            word = word + '7';
        }
        if(i==8)
        {
            word = word + '8';
        }
        if(i==9)
        {
            word = word + '9';
        }
    }
    while(n--)
    {
        long long x = 0;
        string s;
        cin >> s;
        set <char> SET;
        set <char>::iterator it;
        char c;
        for(i=0;i<s.size();i++)
        {
            c = s[i];
            SET.insert(c);
        }
        for(i=0;i<word.size();i++)
        {
            //for(j=0;j<SET.size();j++)
            for (it=SET.begin(); it != SET.end(); ++it)
            {
                if(word[i]==(*it))
                {
                    x++;
                }
                if(x==word.size())
                {
                    break;
                }
            }
        }
        if(x==word.size())
        {
            sum++;
        }
        SET.clear();
    }
    cout << sum << endl;
    return 0;
}
