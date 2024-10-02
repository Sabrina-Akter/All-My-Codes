#include <bits/stdc++.h>
using namespace std;

vector<int> arrayRankTransform(vector<int>& arr) 
{
    vector <int> copy(arr.size());
    for(int i = 0; i < arr.size(); i++)
    {
        copy[i] = arr[i];
    }
    sort(copy.begin(), copy.end());
    unordered_map <int, int> pos;
    int x = 1;
    for(int i = 0; i < copy.size(); i++)
    {
        if(pos.count(copy[i]) == false)
        {
            pos[copy[i]] = x;
            x++;
        }
    }
    vector <int> ans(arr.size());
    for(int i = 0; i < ans.size(); i++) ans[i] = pos[arr[i]];
    return ans;
}

int main()
{
    

    return 0;
}