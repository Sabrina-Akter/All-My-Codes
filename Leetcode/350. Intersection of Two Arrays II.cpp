#include <bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
{
    unordered_map <int, int> freq1, freq2;
    vector <int> ans;
    for(int i = 0; i < nums1.size(); i++)
    {
        freq1[nums1[i]]++;
    }
    for(int i = 0; i < nums2.size(); i++)
    {
        freq2[nums2[i]]++;
        if(freq1[nums2[i]] >= freq2[nums2[i]]) ans.push_back(nums2[i]);
    }
    return ans;
}

int main()
{
    

    return 0;
}