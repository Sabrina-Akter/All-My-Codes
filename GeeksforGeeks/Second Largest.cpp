//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int i, mx1=-1, mx2=-1;
        for(i=0;i<n;i++)
        {
            if(arr[i]>mx1)
            {
                mx1 = arr[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]>mx2 && arr[i]!=mx1)
            {
                mx2 = arr[i];
            }
        }
        return mx2;
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
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends