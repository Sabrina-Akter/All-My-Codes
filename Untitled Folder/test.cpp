#include <bits/stdc++.h>
using namespace std;

int func(string str)
{
    int i, count_vowel=0;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count_vowel++;
        }
    }
    if(count_vowel>=5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string str;
    cin >> str;
    cout << func(str);

    return 0;
}