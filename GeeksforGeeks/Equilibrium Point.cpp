//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        long long sum=0, i, rem, new_sum=0, ans=-1;
        for(i=0;i<n;i++)
        {
            sum+=a[i];
        }
        for(i=0;i<n;i++)
        {
            rem = sum-new_sum-a[i];
            if(rem==new_sum)
            {
                ans = i+1;
                break;
            }
            new_sum+=a[i];
        }
        return ans;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends