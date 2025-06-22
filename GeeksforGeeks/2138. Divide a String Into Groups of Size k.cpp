#include <bits/stdc++.h>
using namespace std;

vector<string> divideString(string s, int k, char fill) 
{
    vector <string> ans;
    string temp;
    for(int i = 0; i < s.size(); i++)
    {
        temp += s[i];
        if(i == s.size() - 1 && temp.size() != k)
        {
            while(temp.size() < k) temp += fill;
        }
        if(temp.size() == k)
        {
            ans.push_back(temp);
            temp = "";
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}