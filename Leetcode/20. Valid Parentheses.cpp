#include <bits/stdc++.h>
using namespace std;

//TC = O(|s|)
//SC = O(|s|)
class Solution 
{
public:
    bool isValid(string s) 
    {
        stack <char> Stack;
        unordered_map <char, char> bracket = {{')', '('}, {']', '['}, {'}', '{'}};
        
        for(auto &Char:s)
        {
            if(Char == '(' || Char == '[' || Char == '{') Stack.push(Char);
            else
            {
                if(Stack.empty() || Stack.top() != bracket[Char]) return false;
                else Stack.pop();
            }
        }
        return Stack.empty();
    }
};

int main()
{
    return 0;
}