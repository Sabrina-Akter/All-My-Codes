#include <bits/stdc++.h>
using namespace std;

bool canArrange(vector<int>& arr, int k) 
{
    unordered_map <int, int> freq;
    for(int i = 0; i < arr.size(); i++)
    {
        int rem = arr[i] % k;
        if(rem < 0) rem += k;
        freq[rem]++;
    }
    for(auto &it : freq)
    {
        int a = it.first;
        int b = it.second;
        if(a == 0 && b % 2 != 0) return false;
        else if(a != 0 && b != freq[k - a]) return false;
    }
    return true;
}

int main()
{
    

    return 0;
}