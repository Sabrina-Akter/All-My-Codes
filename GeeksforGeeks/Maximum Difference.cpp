//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) 
    {
        int n = arr.size();
        stack <int> ls, rs;
        vector <int> v1, v2;
        for(int i = 0; i < n; i++)
        {
            if(ls.empty()) ls.push(arr[i]), v1.push_back(0);
            else
            {
               if(arr[i] > ls.top())
               {
                   v1.push_back(ls.top());
                   ls.push(arr[i]);
               }
               else
               {
                   while(1)
                   {
                       if(ls.empty()) 
                       {
                           ls.push(arr[i]);
                           v1.push_back(0);
                           break;
                       }
                       else 
                       {
                           if(arr[i] > ls.top())
                           {
                               v1.push_back(ls.top());
                               ls.push(arr[i]);
                               break;
                           }
                           else
                           {
                               ls.pop();
                           }
                       }
                   }
               }
            }
        }
        for(int i = n - 1; i >= 0; i--)
        {
            if(rs.empty()) rs.push(arr[i]), v2.push_back(0);
            else
            {
               if(arr[i] > rs.top())
               {
                   v2.push_back(rs.top());
                   rs.push(arr[i]);
               }
               else
               {
                   while(1)
                   {
                       if(rs.empty()) 
                       {
                           rs.push(arr[i]);
                           v2.push_back(0);
                           break;
                       }
                       else 
                       {
                           if(arr[i] > rs.top())
                           {
                               v2.push_back(rs.top());
                               rs.push(arr[i]);
                               break;
                           }
                           else
                           {
                               rs.pop();
                           }
                       }
                   }
               }
            }
        }
        reverse(v2.begin(), v2.end());
        int ans = 0;
        for(int i = 0; i < n; i++) ans = max(ans, abs(v1[i] - v2[i]));
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends