//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution 
{
  public:
    int pairsum(vector<int> &arr) 
    {
        int max1 = INT_MIN; 
        int max2 = INT_MIN; 
    
        for (int num : arr) 
        {
            if (num > max1) 
            {
                max2 = max1;  
                max1 = num;   
            } 
            else if (num > max2 && num < max1) 
            {
                max2 = num; 
            }
        }
        return max1 + max2;
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int r = ob.pairsum(arr);
        cout << r << endl;
    }
    return 0;
}
// } Driver Code Endsv