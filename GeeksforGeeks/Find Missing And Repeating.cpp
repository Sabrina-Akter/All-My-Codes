//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> findTwoElement(vector<int> arr, int n) 
    {
        long long N = n;
        long long s = (N * (N + 1)) / 2;
	    long long s_s = (N * (N + 1) * ((2*N) + 1)) / 6;
	    
	    for(int i=0; i<N; i++)
	    {
	        long long a = arr[i];
	        
	        s = s - a;
	        s_s = s_s - (a*a);
	    }
	    
	    long long x = ((s_s / s) + s) / 2;
	    long long y = x - s;
        vector <int> ans = {(int)y, (int)x};
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends