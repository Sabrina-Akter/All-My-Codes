//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// long long int maxSum(int arr[], int n);

// } Driver Code Ends
class Solution 
{
  public:
    long long maxSum(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        vector <int> v;
        int left = 0, right = arr.size() - 1;
        while(left <= right)
        {
            if(left == right) v.push_back(arr[left]);
            else
            {
                v.push_back(arr[left]);
                v.push_back(arr[right]);
            }
            left++;
            right--;
        }
        v.push_back(v[0]);
        long long ans = 0;
        for(int i = 1; i < v.size(); i++)
        {
            ans += abs(v[i - 1] - v[i]);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        long long ans = ob.maxSum(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends