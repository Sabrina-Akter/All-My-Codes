#include <bits/stdc++.h>
using namespace std;

bool checkIfExist(vector<int>& arr) 
{
    unordered_map <int, int> mp;
    for(int i = 0; i < arr.size(); i++)
    {
        if(mp.count(arr[i] * 2)) return true;
        else if(arr[i] % 2 == 0 && mp.count(arr[i] / 2)) return true;
        mp[arr[i]];
    }
    return false;
}

int main()
{
    

    return 0;
}