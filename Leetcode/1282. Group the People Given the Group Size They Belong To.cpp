#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int i, j, k, mx=0;
        vector <int> v[510];
        for(i=0;i<groupSizes.size();i++)
        {
            v[groupSizes[i]].push_back(i);
            mx = max(groupSizes[i], mx);
        }
        vector<vector<int>> ans;
        for(i=1;i<=mx;i++)
        {
            k=0;
            vector<int>x;
            for(j=0;j<v[i].size();j++)
            {
                k++;
                x.push_back(v[i][j]);
                if(k==i)
                {
                    ans.push_back(x);
                    x.clear();
                    k=0;
                }
            }
        }
        return ans;
    }

int main()
{
    vector <int> v = {3,3,3,3,3,1,3};
    groupThePeople(v);
    return 0;
}