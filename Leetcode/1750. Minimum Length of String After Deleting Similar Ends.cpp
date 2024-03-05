#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int minimumLength(string s) 
    {
        int left = 0;
        int right = s.size() - 1;
        while(left < right)
        {
            if(s[left] == s[right])
            {
                while(left < right)
                {
                   int temp_l = left;
                   int temp_r = right;
                   if(s[left] == s[left + 1] && left + 1 != right) left++; 
                   if(s[right] == s[right - 1] && right - 1 != left) right--;
                   if(temp_l == left && temp_r == right) break;
                }
                left++;
                right--;
            }
            else
            {
                break;
            }
        }

        return right - left + 1;
    }
};

int main()
{
    

    return 0;
}