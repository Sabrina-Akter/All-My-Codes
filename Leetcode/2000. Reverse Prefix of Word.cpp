#include <bits/stdc++.h>
using namespace std;

string reversePrefix(string word, char ch) 
{
    string ans, temp;
    bool found = false;
    for(auto &it : word)
    {
        temp += it;
        if(it == ch && found == false)
        {
            reverse(temp.begin(), temp.end());
            ans = temp;
            found = true;
        }
        else if(found == true)
        {
            ans += it;
        }
    }
    if(ans == "") ans = word;
    return ans;
}

int main()
{
    

    return 0;
}