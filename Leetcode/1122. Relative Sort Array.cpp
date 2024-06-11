#include <bits/stdc++.h>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
{
    map <int, int> freq;
    for(int i = 0; i < arr1.size(); i++)
    {
        freq[arr1[i]]++;
    }
    vector <int> ans;
    for(int i = 0; i < arr2.size(); i++)
    {
        for(int j = 0; j < freq[arr2[i]]; j++)
        {
            ans.push_back(arr2[i]);
        }
        freq.erase(arr2[i]);
    }
    for(auto &it : freq)
    {
        for(int i = 0; i < it.second; i++)
        {
            ans.push_back(it.first);
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}