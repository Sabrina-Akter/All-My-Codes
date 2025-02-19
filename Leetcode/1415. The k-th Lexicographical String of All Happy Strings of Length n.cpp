#include <bits/stdc++.h>
using namespace std;

void f(string s, int n, vector<string> &strings)
{
    if(s.size() == n)
    {
        strings.push_back(s);
        return;
    }
    else
    {
        if(s.empty() || s.back() != 'a') f(s + 'a', n, strings);
        if(s.empty() || s.back() != 'b') f(s + 'b', n, strings);
        if(s.empty() || s.back() != 'c') f(s + 'c', n, strings);
    }
}

string getHappyString(int n, int k) 
{
    vector <string> strings;
    f("", n, strings);

    if(k <= strings.size()) return strings[k - 1];
    return "";
}

int main()
{
    

    return 0;
}