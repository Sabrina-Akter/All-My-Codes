//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            unordered_map <char, int> freq1, freq2;
            for(auto &letter : A)
            {
                freq1[letter] = 1;
            }
            for(auto &letter : B)
            {
                freq2[letter] = 1;
            }
            string ans;
            for(auto &it : freq1)
            {
                if(freq1[it.first] == 1 && freq2[it.first] == 0) ans.push_back(it.first);
            }
            for(auto &it : freq2)
            {
                if(freq2[it.first] == 1 && freq1[it.first] == 0) ans.push_back(it.first);
            }
            sort(ans.begin(), ans.end());
            return ans.size() > 0 ? ans : "-1";
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends