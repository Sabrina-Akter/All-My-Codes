#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i;
    string s, word="";
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='-' && s[i+1]=='-')
        {
            word = word + '2';
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            word = word + '1';
            i++;
        }
        else if(s[i]=='.')
        {
            word = word + '0';
        }
    }
    cout << word << endl;
    return 0;
}
