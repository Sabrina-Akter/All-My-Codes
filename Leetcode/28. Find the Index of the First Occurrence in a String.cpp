#include <bits/stdc++.h>
using namespace std;

//TC = O(m * n), where 'm' is the length of the haystack string, and 'n' is the length of the needle string.
//SC = O(1)
class Solution {
public:
    bool check_match(string &haystack, string &needle, int i)
    {
        int ptr1 = 1;
        int ptr2 = i + 1;
        int count = 0;
        while(ptr1 < needle.size() && ptr2 < haystack.size())
        {
            if(needle[ptr1] != haystack[ptr2]) return false;
            ptr1++;
            ptr2++;
            count++;
        }
        if(count == needle.size()-1) return true;
        return false;
    }

    int strStr(string haystack, string needle) {
        for(int i = 0; i <= haystack.size(); i++)
        {
            if(needle[0] == haystack[i] && check_match(haystack, needle, i)) return i;
        }
        return -1;
    }
};

int main()
{
    return 0;
}