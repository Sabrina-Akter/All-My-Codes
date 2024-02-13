//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution 
{
  public:
    void f(string S, int sum, vector<int> num, vector<vector<string>> &ans)
    {
        if(sum == S.size())
        {
            int start = 0;
            vector <string> temp;
            bool ok = true;
            for(auto &it : num)
            {
                string word = S.substr(start, it);
                string rev = word;
                reverse(rev.begin(), rev.end());
                if(word == rev) temp.push_back(word);
                else
                {
                    ok = false;
                    break;
                }
                start += it;
            }
            if(ok == true) ans.push_back(temp);
        }
        else
        {
            for(int i = 1; i <= S.size(); i++)
            {
                if(sum + i <= S.size())
                {
                    num.push_back(i);
                    f(S, sum + i, num, ans);
                    num.pop_back();
                }
            }
        }
    }
    vector<vector<string>> allPalindromicPerms(string S) 
    {
        vector<vector<string>> ans;
        vector<int> num;
        f(S, 0, num, ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends