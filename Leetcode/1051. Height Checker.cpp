#include <bits/stdc++.h>
using namespace std;

int heightChecker(vector<int>& heights) 
{
    vector <int> expected(heights.size());
    for(int i = 0; i < heights.size(); i++)
    {
        expected[i] = heights[i];
    }
    sort(expected.begin(), expected.end());
    int ans = 0;
    for(int i = 0; i < heights.size(); i++)
    {
        if(heights[i] != expected[i]) ans++;
    }
    return ans;
}

int main()
{
    

    return 0;
}