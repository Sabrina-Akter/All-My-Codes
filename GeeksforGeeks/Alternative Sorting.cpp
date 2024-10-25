//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    vector<int> alternateSort(vector<int>& arr) 
    {
        sort(arr.rbegin(), arr.rend());
        vector <int> ans;
        int i = 0, j = arr.size() - 1, x = 0;
        while(i <= j)
        {
            if(x % 2 == 0)
            {
                ans.push_back(arr[i]);
                i++;
            }
            else
            {
                ans.push_back(arr[j]);
                j--;                
            }
            x++;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.alternateSort(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends