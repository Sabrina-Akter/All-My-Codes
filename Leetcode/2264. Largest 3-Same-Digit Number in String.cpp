#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    string largestGoodInteger(string num) 
    {
        string mx;
        int n = num.size();
        for(int i = 0; i < n - 2; i++)
        {
            char char1 = num[i];
            char char2 = num[i+1];
            char char3 = num[i+2];
            if(char1 == char2 && char1 == char3)
            {
                string temp = num.substr(i, 3);
                if(mx == "" || temp > mx) mx = temp;
            }
        }
        return mx;
    }
};

int main()
{
    

    return 0;
}