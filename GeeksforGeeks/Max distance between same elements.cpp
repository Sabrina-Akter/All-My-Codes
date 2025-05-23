//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    int maxDistance(vector<int> &arr) 
    {
        unordered_map <int, int> pos;
        int n = arr.size();
        for(int i = n - 1; i >= 0; i--)
        {
            if(pos.count(arr[i]) == false) pos[arr[i]] = i;
        }
        int mx = 0;
        for(int i = 0; i < n; i++)
        {
           mx = max(mx, abs(i - pos[arr[i]]));
        }
        return mx;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);

        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.maxDistance(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends