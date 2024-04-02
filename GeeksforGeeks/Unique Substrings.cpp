//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int unique_substring(string str)
    {
        unordered_map <string, int> freq;
        int ans = 0;
        for(int i = 0; i < str.size(); i++)
        {
            string temp;
            for(int j = i; j < str.size(); j++)
            {
                temp += str[j];
                freq[temp]++;
                if(freq[temp] == 1) ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t-->0){
        string str;
        cin>>str;
        Solution ob;
        int ans= ob.unique_substring(str);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends