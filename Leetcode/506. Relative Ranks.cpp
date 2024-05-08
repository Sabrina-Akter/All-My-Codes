#include <bits/stdc++.h>
using namespace std;

vector<string> findRelativeRanks(vector<int>& score) 
{
    map <int, string> rank;
    for(int i = 0; i < score.size(); i++)
    {
        rank[score[i]];
    }
    int pos = score.size();
    for(auto &it : rank)
    {
        if(pos == 1) rank[it.first] = "Gold Medal";
        else if(pos == 2) rank[it.first] = "Silver Medal";
        else if(pos == 3) rank[it.first] = "Bronze Medal";
        else
        {
            string temp = to_string(pos);
            rank[it.first] = temp;

        }  
        pos--;
    }
    vector <string> ans(score.size());
    for(int i = 0; i <score.size(); i++)
    {
        ans[i] = rank[score[i]];
    }
    return ans;
}

int main()
{
    

    return 0;
}