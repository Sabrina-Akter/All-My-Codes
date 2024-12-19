//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution 
{
  public:
    int kthMissing(vector<int> &arr, int k) 
    {
        map <int, int> mp;
        for(int i = 0; i < arr.size(); i++) mp[arr[i]] = 1;
        auto it = mp.begin();
        int x = 1, cnt = 0;
        while(1)
        {
            if(x == it->first)
            {
                x++;
                it++;
            }
            else
            {
                cnt++;
                if(cnt == k) return x;
                x++;
            }
            if(it == mp.end()) break;
        }
        it--;
        return it->first + k - cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.kthMissing(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends