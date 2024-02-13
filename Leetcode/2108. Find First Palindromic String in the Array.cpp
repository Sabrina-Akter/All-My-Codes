#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    bool is_palindrome(string &word)
    {
        int left = 0;
        int right = word.size() - 1;
        while(left <= right)
        {
            if(word[left] != word[right]) return false;
            left++;
            right--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) 
    {
        for(auto &word : words)
        {
            if(is_palindrome(word) == true) return word;
        }
        return "";
    }
};

int main()
{
    

    return 0;
}