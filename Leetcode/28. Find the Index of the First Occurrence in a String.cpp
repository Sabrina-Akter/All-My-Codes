#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
        int ans=-1;
        auto it = haystack.find(needle);
        if(it!=string::npos)
        {
            ans = it;
        }
        return ans;
    }

int main()
{
    string haystack = "sadbutsad", needle = "sad";
    strStr(haystack, needle);
    return 0;
}