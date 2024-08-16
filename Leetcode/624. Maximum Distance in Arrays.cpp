#include <bits/stdc++.h>
using namespace std;

int maxDistance(vector<vector<int>>& arrays) 
{ 
    vector <pair<int, int>> first, last;
    for(int i = 0; i < arrays.size(); i++)
    {
        int n = arrays[i].size();
        first.push_back({arrays[i][0], i});
        last.push_back({arrays[i][n - 1], i});
    }
    sort(first.begin(), first.end());
    sort(last.rbegin(), last.rend());
    if(first[0].second != last[0].second) return last[0].first - first[0].first;
    else
    {
        int first0 = first[0].first;
        int first1 = first[1].first;
        int second0 = last[0].first;
        int second1 = last[1].first;
        int dif1 = second1 - first0;
        int dif2 = second0 - first1;
        return (dif1 >= dif2)? dif1 : dif2;
    }
}

int main()
{
    

    return 0;
}