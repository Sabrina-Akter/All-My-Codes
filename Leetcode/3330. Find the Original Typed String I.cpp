#include <bits/stdc++.h>
using namespace std;

int possibleStringCount(string word) 
{
    int ans = 1, cnt = 0;
    for(int i = 1; i < word.size(); i++)
    {
        if(word[i] == word[i - 1])
        {
            cnt++;
        }
        if((word[i] != word[i - 1]) || i == word.size() - 1)
        {
            ans += cnt;
            cnt = 0;
        }
    }
    return ans;
}

int main()
{  

    return 0;
}