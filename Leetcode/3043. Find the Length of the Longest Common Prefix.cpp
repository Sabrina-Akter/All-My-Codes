#include <bits/stdc++.h>
using namespace std;

int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) 
{
    unordered_map <string, int> mp;
    string s, temp;
    for(int i = 0; i < arr1.size(); i++)
    {
        s = to_string(arr1[i]);
        temp = "";
        for(int j = 0; j < s.size(); j++)
        {
            temp += s[j];
            mp[temp] = 1;
        }
    }
    int mx = 0, size;
    for(int i = 0; i < arr2.size(); i++)
    {
        s = to_string(arr2[i]);
        temp = "";
        for(int j = 0; j < s.size(); j++)
        {
            temp += s[j];
            size = temp.size();
            if(mp.count(temp)) mx = max(mx, size);
        }
    }
    return mx;
}

int main()
{
    

    return 0;
}