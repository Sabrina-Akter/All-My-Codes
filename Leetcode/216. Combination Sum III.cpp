#include <bits/stdc++.h>
using namespace std;

    void f(vector<vector<int>>& ans, vector <int>& v, int ind, int sum, int target, int count, int k, vector <int>& test)
    {
        if(ind==8)
        {
            if(sum==target && count==k)
            {
                ans.push_back(test);
            }
        }
        else
        {
            f(ans, v, ind+1, sum, target, count, k, test);
            if(count+1<=k)
            {
                test.push_back(v[ind+1]);
                f(ans, v, ind+1, sum+v[ind+1], target, count+1, k, test);
                test.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector <int> v = {1,2,3,4,5,6,7,8,9}, t;
        f(ans, v, -1, 0, n, 0, k, t);
        return ans;
    }

int main()
{
    int k, n;
    cin >> k >> n;
    combinationSum3(k, n);
    return 0;
}