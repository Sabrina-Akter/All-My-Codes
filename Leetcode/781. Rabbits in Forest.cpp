#include <bits/stdc++.h>
using namespace std;

int numRabbits(vector<int>& answers) 
{
    int n = answers.size();
    unordered_map <int, int> mp;
    for(int i  = 0; i < n; i++)
    {
        mp[answers[i]]++;
    }
    int ans = 0, x, y, div;
    for(auto &it : mp)
    {
        x = it.second;
        y = it.first + 1;
        div = x / y;
        if(x % y != 0) div++;
        ans += (div * y);
    }
    return ans;
}

int main()
{
    

    return 0;
}