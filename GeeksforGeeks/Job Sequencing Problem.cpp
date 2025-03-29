//{ Driver Code Starts
// Driver code
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution 
{
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) 
    {
        int n = deadline.size();
        vector<pair<int, int>> jobs(n);
        for (int i = 0; i < n; ++i) jobs[i] = {profit[i], deadline[i]};
        sort(jobs.rbegin(), jobs.rend());
        int maxDeadline = *max_element(deadline.begin(), deadline.end());
        set<int> availableSlots;
        for (int i = 1; i <= maxDeadline; ++i) availableSlots.insert(i);
        int totalProfit = 0;
        int jobCount = 0;
        for (int i = 0; i < n; i++) 
        {
            int p = jobs[i].first;
            int d = jobs[i].second;
            auto it = availableSlots.upper_bound(d); 
            if (it == availableSlots.begin()) continue; 
            --it; 
            availableSlots.erase(it); 
            totalProfit += p;
            jobCount++;
        }
        return {jobCount, totalProfit};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> deadlines, profits;
        string temp;
        getline(cin, temp);
        int x;
        istringstream ss1(temp);
        while (ss1 >> x)
            deadlines.push_back(x);

        getline(cin, temp);
        istringstream ss2(temp);
        while (ss2 >> x)
            profits.push_back(x);

        Solution obj;
        vector<int> ans = obj.jobSequencing(deadlines, profits);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends