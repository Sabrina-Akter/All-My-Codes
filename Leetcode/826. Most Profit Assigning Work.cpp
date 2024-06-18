#include <bits/stdc++.h>
using namespace std;

int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) 
{
    int n = difficulty.size(), m = worker.size();
    vector <pair<int, int>> sorted(n);
    vector <int> dif(n);
    for(int i = 0; i < n; i++)
    {
        sorted[i] = {difficulty[i], profit[i]};
    }
    sort(sorted.begin(), sorted.end());
    int mx = 0;
    vector <int> MX(n);
    for(int i = 0; i < n; i++)
    {
        mx = max(mx, sorted[i].second);
        MX[i] = mx;
        dif[i] = sorted[i].first;
    }
    int ans = 0;
    for(int i = 0; i < m; i++)
    {
        auto it = upper_bound(dif.begin(), dif.end(), worker[i]);
        if(it == dif.end() || (*it) > worker[i]) it--;
        int pos = it - dif.begin();
        if(pos == -1) continue;
        else ans += MX[pos];
    }
    return ans;
}

int main()
{
    

    return 0;
}