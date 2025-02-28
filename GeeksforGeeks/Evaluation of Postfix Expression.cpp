//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution 
{
  public:
    int evaluate(vector<string>& arr) 
    {
        stack <double> st;
        unordered_map <string, int> mp;
        mp["+"] = 1, mp["-"] = 1, mp["*"] = 1, mp["/"] = 1;
        for(int i = 0; i < arr.size(); i++)
        {
            if(mp[arr[i]] == 1)
            {
                double second = st.top();
                st.pop();
                double first = st.top();
                st.pop();
                if(arr[i] == "+") st.push(first + second);
                else if(arr[i] == "-") st.push(first - second);
                else if(arr[i] == "*") st.push(first * second);
                else if(arr[i] == "/") st.push(trunc(first / second));
            }
            else
            {
                int num1 = stoi(arr[i]);
                double num2 = num1;
                st.push(num2);
            }
        }
        int ans = trunc(st.top());
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<string> arr;
        while (ss >> str) {
            arr.push_back(str);
        }
        Solution ob;
        cout << ob.evaluate(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends