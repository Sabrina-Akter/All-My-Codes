#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        vector <int> trusts(n + 1, 0), trusted(n + 1, 0);
        for(auto &it : trust)
        {
            trusts[it[0]] = 1;
            trusted[it[1]]++;
        }
        for(int i = 1; i <= n; i++)
        {
            if(trusts[i] == 0 && trusted[i] == n - 1) return i;
        }
        return -1;
    }
};

int main()
{
    return 0;
}