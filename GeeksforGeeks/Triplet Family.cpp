//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    bool findTriplet(vector<int>& arr) 
    {
        unordered_map <int, int> mp;
        for(int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        for(int i = 0; i < arr.size(); i++)
        {
            for(int j = i + 1; j < arr.size(); j++)
            {
                int sum = arr[i] + arr[j];
                if(mp.count(sum))
                {
                    if(arr[i] == 0 || arr[j] == 0)
                    {
                        if(mp[sum] > 1) return true;
                    }
                    else if(arr[i] == 0 && arr[j] == 0)
                    {
                        if(mp[sum] > 2) return true;
                    }
                    else
                    {
                        return true;
                    }
                }
            }
        }
        return false;
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
        bool res = obj.findTriplet(arr);
        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        // cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends