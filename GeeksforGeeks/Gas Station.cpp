//{ Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    int startStation(vector<int> &gas, vector<int> &cost) 
    {
        int n = gas.size();
        int cnt = 0, sum = 0, j = 1, ans;
        bool found = false;
        for(int i = 0; i < n; i++)
        {
            sum += (gas[i] - cost[i]);
            if(sum >= 0)
            {
                cnt++;
                if(found == false)
                {
                    ans = i;
                    found = true;
                }
                //cout << i << " " << sum << " " << cnt << endl;
            }
            else
            {
                sum = 0;
                cnt = 0;
                found = false;
                //cout << i << " " << sum << " " << cnt << endl;
            }
            if(i == n - 1)
            {
               i = -1; 
               j++;
               if(j == 3) break;
            }
            if(cnt == n) return ans;
        }
        return -1;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function */
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {

        vector<int> gas, cost;
        string input1;
        getline(cin, input1);
        stringstream ss(input1);
        int number1;
        while (ss >> number1) {
            gas.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream sss(input2);
        int number2;
        while (sss >> number2) {
            cost.push_back(number2);
        }
        Solution ob;
        int ans = ob.startStation(gas, cost);

        cout << ans << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends