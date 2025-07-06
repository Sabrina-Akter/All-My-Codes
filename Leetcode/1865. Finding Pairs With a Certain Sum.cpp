#include <bits/stdc++.h>
using namespace std;

vector <long long> v1, v2;
unordered_map <long long, long long> mp1, mp2;
FindSumPairs(vector<int>& nums1, vector<int>& nums2) 
{
    for(auto &it : nums1)
    {
        v1.push_back(it);
        mp1[it]++;
    }         
    for(auto &it : nums2)
    {
        v2.push_back(it);
        mp2[it]++;
    }
}

void add(int index, int val) 
{
    mp2[v2[index]]--;
    v2[index] += val;
    mp2[v2[index]]++;
}

int count(int tot) 
{
    int sum = 0;
    for(auto &it : mp1)
    {
        if(mp2.count((tot - it.first)))
        {
            sum += (it.second * mp2[(tot - it.first)]);
        }
    }
    return sum;
}

int main()
{
    
    return 0;
}