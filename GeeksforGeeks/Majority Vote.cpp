//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) 
    {
        double n = nums.size(), x = 3, div = n / x;
        map <int, int> freq;
        vector <int> ans;
        for(int i = 0; i < n; i++)
        {
            freq[nums[i]]++;
        }
        for(auto &it : freq)
        {
            if(it.second > div) ans.push_back(it.first);
        }
        if(ans.size() == 0) ans.push_back(-1);
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
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends