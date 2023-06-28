#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>>& matches) {
    int i, a;
    map <int, int> won, lost;
    for(i=0;i<matches.size();i++)
    {
        int w=matches[i][0], l=matches[i][1];
        won[w]++;
        lost[l]++;
    }
    vector<vector<int>> ans;
    vector <int> v1, v2;
    for(auto it=won.begin(); it!=won.end(); it++)
    {
        a = (*it).first;
        if(lost[a]==0)
        {
            v1.push_back(a);
        }
    }
    ans.push_back(v1);
    for(auto it=lost.begin(); it!=lost.end(); it++)
    {
        a = (*it).first;
        if(lost[a]==1)
        {
            v2.push_back(a);
        }
    }
    ans.push_back(v2);
    for(i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return ans;
    }

int main()
{
    vector <vector<int>> matches = {{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
    findWinners(matches);

    return 0;
}