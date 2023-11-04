#include <bits/stdc++.h>
using namespace std;

//TC = O(|s|)
//SC = O(M); where 'M' is the maximum depth of nested square brackets in the input string.
//For example: For input string "3[a2[bc]4[d]]", the maximum nesting depth is 2.
class Solution 
{
public:
    string decodeString(string s) 
    {
        stack <pair<string, int>> Stack;
        Stack.push({"", 1});
        int times = 0;
        for(auto &Char:s)
        {
            if(isdigit(Char))
            {
                times = (times * 10) + (Char - '0');
            }
            else if(Char == '[')
            {
                Stack.push({"", times});
                times = 0;
            }
            else if(Char == ']')
            {
                int loop = Stack.top().second;
                string str = Stack.top().first;
                Stack.pop();
                while(loop--)
                {
                    Stack.top().first += str;
                }
            }
            else
            {
                Stack.top().first.push_back(Char);
            }
        }
        return Stack.top().first;
    }
};

int main()
{
    

    return 0;
}