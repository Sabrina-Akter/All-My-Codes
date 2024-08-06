//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution 
{
  public:
    int isValid(string str) 
    {
        int n = str.size();
        string temp;
        int num = 0;
        long long x;
        for(int i = 0; i < n; i++)
        {
            if((i != n - 1 && str[i] == '.') || (i == n - 1 && str[i] != '.'))
            {
                if(i == n - 1) temp += str[i];
                if(temp == "") break;
                if(temp.size() > 1 && temp[0] == '0') break;
                x = stoll(temp);
                if(x >= 0 && x <= 255)
                {
                    num++;
                    temp = "";
                }
                else
                {
                    break;
                }
            }
            else
            {
                temp += str[i];
            }
        }
        return (num == 4);
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends