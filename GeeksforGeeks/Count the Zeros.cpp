//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{   
public:
    int countZeroes(int arr[], int n) 
    {
        int left = 0;
        int right = n - 1;
        int mid;
        int ans = n;
        while(left <= right)
        {
            mid = left + ((right - left) / 2);
            if(arr[mid] == 1)
            {
                left = mid + 1;
            }
            else if(arr[mid] == 0)
            {
                ans = mid;
                right = mid - 1;
            }
        }
        return n - ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends