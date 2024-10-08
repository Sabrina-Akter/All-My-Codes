#include <bits/stdc++.h>
using namespace std;

int minSwaps(string s) 
{
    int close = 0, mx = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '[') close--;
        else close++;
        mx = max(mx, close);
    }
    return (mx + 1) / 2;
}

int main()
{
    

    return 0;
}