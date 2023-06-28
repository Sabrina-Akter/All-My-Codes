#include <bits/stdc++.h>
using namespace std;

vector <int> save[1005], v[1005];

int findJudge(int n, vector<vector<int>>& trust) {
        int i, f=0, ans;
        map <pair<int, int>, int> m1, m2;
        for(i=0;i<trust.size();i++)
        {
            int a = trust[i][0], b = trust[i][1];
            m1[{a, b}]++;
            m2[{b, a}]++;
            if(m1[{a, b}]==1)
            {
                save[b].push_back(a);
            }
            if(m2[{b, a}]==1)
            {
                v[a].push_back(b);
            }
        }
        for(i=1;i<=n;i++)
        {
            if(save[i].size()==n-1 && v[i].size()==0)
            {
                f++;
                if(f==1)
                {
                    ans = i;
                }
            }
        }
        if(f==1 && v[ans].size()==0)
        {
            return ans;
        }
        else
        {
            return -1;
        }
    }

int main()
{
    int n = 5;
    vector<vector<int>> trust = {{1,2},{3,2},{1,3},{4,5},{5,2},{3,1},{5,4},{2,1},{3,4},{5,1},{2,5},{4,1},{2,4},{3,5}};
    cout << findJudge(n, trust);
    return 0;
}