//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  Class Solution to contain the method for solving the problem.
class Solution 
{
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) 
    {
        long long total = accumulate(arr.begin(), arr.end(), 0);
        vector <int> x = {-1, -1};
        if(total % 3 != 0) return x;
        long long avg = total / 3, cnt = 0, sum = 0;
        vector <int> temp;
        for(int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
            if(sum == avg)
            {
                cnt++;
                sum = 0;
                temp.push_back(i);
            }
        }
        vector <int> ans;
        if(cnt >= 3) 
        {
            temp.pop_back();
            ans = temp;
        }
        else
        {
            ans = x;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        vector<int> result = ob.findSplit(arr);

        // Output result
        if (result[0] == -1 && result[1] == -1) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
    }
    return 0;
}

// } Driver Code Ends