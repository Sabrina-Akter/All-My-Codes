//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) 
    {
        double n = arr.size();
        double three = 3;
        double div = n / three;
        int cnt = 0;
        map <int, int> mp;
        for(int i = 0; i < arr.size(); i++) mp[arr[i]]++;
        vector <int> ans;
        for(auto &it : mp) if(it.second > div) ans.push_back(it.first);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto &i : ans)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends