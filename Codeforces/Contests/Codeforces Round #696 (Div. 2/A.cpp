#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main()
{
    long long t, i, n;
    cin >> t;
    while(t--)
    {
        string s, word="", sum="";
        char c;
        cin >> n;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            if(i==0)
            {
                if(s[i]=='0')
                {
                    c = '1';
                    word = word + c;
                    sum = sum + c;
                }
                else if(s[i]=='1')
                {
                    c = '2';
                    word = word + '1';
                    sum = sum + '2';
                }
            }
            else
            {
                if(s[i]=='0')
                {
                    if(c=='2')
                    {
                        c='1';
                        word = word + '1';
                        sum = sum + '1';
                    }
                    else if(c=='1')
                    {
                        c='0';
                        word = word + '0';
                        sum = sum + '0';
                    }
                    else if(c=='0')
                    {
                        c='1';
                        word = word + '1';
                        sum = sum + '1';
                    }
                }
                else if(s[i]=='1')
                {
                    if(c=='2')
                    {
                        c='1';
                        word = word + '0';
                        sum = sum + '1';
                    }
                    else if(c=='1')
                    {
                        c='2';
                        word = word + '1';
                        sum = sum + '2';
                    }
                    else if(c=='0')
                    {
                        c='2';
                        word = word + '1';
                        sum = sum + '2';
                    }
                }
            }
        }
        cout << word << endl;
    }
    return 0;
}
