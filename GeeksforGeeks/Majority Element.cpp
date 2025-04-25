//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution 
{
  public:
    int majorityElement(vector<int>& arr) 
    {
        double n = arr.size(), half = n / 2;
        unordered_map <int, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]] > half) return arr[i];
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends