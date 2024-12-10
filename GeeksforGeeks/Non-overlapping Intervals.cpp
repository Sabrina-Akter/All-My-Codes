//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    static bool compareIntervals(const vector<int>& a, const vector<int>& b) 
    {
        if (a[1] < b[1]) return true;
        if (a[1] > b[1]) return false;
        return a[0] < b[0];
    }
  
    int minRemoval(vector<vector<int>> &intervals) 
    {
       sort(intervals.begin(), intervals.end(), compareIntervals);
       int last = -1, cnt = 0;
       for(auto &it : intervals)
       {
           if(it[0] >= last) last = it[1];
           else cnt++;
       }
       return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        Solution obj;
        cout << obj.minRemoval(intervals) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends