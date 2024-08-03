#include <bits/stdc++.h>
using namespace std;

bool canBeEqual(vector<int>& target, vector<int>& arr) 
{
    if(target.size() != arr.size()) return false;
    int n = arr.size();
    unordered_map <int, int> freq;
    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for(int i = 0; i < n; i++)
    {
        freq[target[i]]--;
    }
    for(auto &it : freq)
    {
        if(it.second != 0) return false;
    }
    return true;
}

int main()
{
    

    return 0;
}