//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution 
{
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) 
    {
        int n = start.size();
        vector <pair<int, int>> v(n);
        for(int i = 0; i < n; i++)
        {
            v[i] = {finish[i], start[i]};
        }
        sort(v.begin(), v.end());
        int first = 0, last, ans = 0;
        for(int i = 0; i < n; i++)
        {
            last = v[i].second;
            if(last > first)
            {
                ans++;
                first = v[i].first;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> start;
        int num;
        while (ss >> num)
            start.push_back(num);
        getline(cin, input);
        ss.clear();
        vector<int> finish;
        ss.str(input);
        while (ss >> num)
            finish.push_back(num);

        Solution obj;
        cout << obj.activitySelection(start, finish) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends