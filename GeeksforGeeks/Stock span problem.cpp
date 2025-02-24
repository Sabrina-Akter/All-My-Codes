//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    vector<int> calculateSpan(vector<int>& arr) 
    {
        int n = arr.size();
        stack <int> st;
        vector <int> ans(n);
        for(int i = 0; i < n; i++)
        {
            if(st.empty())
            {
                st.push(i);
                ans[i] = i + 1;
            }
            else
            {
                if(arr[st.top()] > arr[i])
                {
                    ans[i] = (i - st.top());
                    st.push(i);
                }
                else
                {
                    while(!st.empty())
                    {
                        st.pop();
                        if(!st.empty() && arr[st.top()] > arr[i])
                        {
                            ans[i] = (i - st.top());
                            st.push(i);
                            break;
                        }                        
                    }
                    if(st.empty())
                    {
                       ans[i] = i + 1;
                       st.push(i); 
                    }
                    
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.calculateSpan(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends