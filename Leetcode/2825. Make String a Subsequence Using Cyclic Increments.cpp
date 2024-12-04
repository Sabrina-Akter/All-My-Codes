#include <bits/stdc++.h>
using namespace std;

bool canMakeSubsequence(string str1, string str2) 
{
    int x = 0;
    char cur, next;
    for(int i = 0; i < str1.size(); i++)
    {
        cur = str1[i];
        next = cur + 1;
        if(cur == 'z') next = 'a';
        if(cur == str2[x] || next == str2[x]) x++;
        if(x == str2.size()) return true;
    }
    return false;
}

int main()
{
    

    return 0;
}