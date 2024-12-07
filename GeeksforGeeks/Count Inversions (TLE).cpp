//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count inversions in the array.
    int inversionCount(vector<int> &arr) 
    {
        multiset<int> pq;
        int ans = 0;
        for (int i = 0; i < arr.size(); i++) 
        {
            auto it = pq.upper_bound(arr[i]);
            if (it != pq.end()) 
            {
                ans += pq.size() - distance(pq.begin(), it);
            }
            pq.insert(arr[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends