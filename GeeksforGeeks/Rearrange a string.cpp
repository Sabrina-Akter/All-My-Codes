//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        string ans;
        int sum = 0;
        bool present = false;
        for(auto &c : str)
        {
            if(c >= '0' && c <= '9')
            {
                sum += c - '0';
                present = true;
            }
            else ans += c;
        }
        sort(ans.begin(), ans.end());
        string add = to_string(sum);
        return (present == true) ? ans + add : ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}


// } Driver Code Ends