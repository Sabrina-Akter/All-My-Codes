//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution 
{
  public:

    string longestCommonPrefix(vector<string> arr) 
    {
        unordered_map <string, int> mp;
        int mx = 0;
        string ans = "-1";
        for(int i = 0; i < arr.size(); i++)
        {
            string temp;
            for(int j = 0; j < arr[i].size(); j++)
            {
                temp += arr[i][j];
                mp[temp]++;
                if(mp[temp] == arr.size())
                {
                    if(temp.size() > mx)
                    {
                        ans = temp;
                        mx = temp.size();
                    }
                }
                if(mp[temp] != i + 1) break;
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
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends