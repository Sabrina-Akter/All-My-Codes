#include <bits/stdc++.h>
using namespace std;

    bool repeatedSubstringPattern(string s) {
        string ss = s+s;
        return ss.substr(1, ss.size()-2).find(s) != string::npos;
    }

int main()
{
    string s = "abaababaab";
    repeatedSubstringPattern(s);
    return 0;
}