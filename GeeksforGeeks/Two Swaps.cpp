//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    bool checkSorted(vector<int> &arr) 
    {
        int cnt = 0, i = 0;
        while(i < arr.size())
        {
            int num = arr[i];
            int pos = num - 1;
            if(arr[i] != i + 1) 
            {
                swap(arr[i], arr[pos]);
                cnt++;
            }
            else i++;
            if(cnt > 2) return false;
        }
        return cnt == 2 || cnt == 0? true : false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        bool ans = ob.checkSorted(arr);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}

// } Driver Code Ends