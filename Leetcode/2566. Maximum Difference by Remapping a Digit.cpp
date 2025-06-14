#include <bits/stdc++.h>
using namespace std;

int minMaxDifference(int num) 
{
    string s = to_string(num), mx = s, mn = s;

    for (char c : s)
    {
        if (c != '9')
        {
            for (char &ch : mx) if (ch == c) ch = '9';  
            break;
        }
    }

    for (char c : s)
    {
        if (c != '0')
        {
            for (char &ch : mn) if (ch == c) ch = '0';
            break;
        }
    }

    return stoi(mx) - stoi(mn);
}

int main()
{
    

    return 0;
}