//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    int maxWater(vector<int> &arr) 
    {
        int n = arr.size();
        int left=0, right=n-1, lmax = 0, rmax = 0, mn=0, sum=0, x=0;
    
        while(left<right)
        {
            int temp1 = arr[left], temp2 = arr[right];
            lmax = max(temp1, lmax);
            rmax = max(temp2, rmax);
            mn = min(lmax, rmax);
            if(arr[left]<=arr[right])
            {
                left++;
                x = mn-arr[left];
                if(x>0)
                {
                    sum+=x;
                }
            }
            else
            {
                right--;
                x = mn-arr[right];
                if(x>0)
                {
                    sum+=x;
                }
            }
        }
        if(sum<0)
        {
            sum = 0;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends