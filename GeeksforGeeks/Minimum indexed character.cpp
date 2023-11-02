//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        vector <int> index(26);
        for(int i=0; i<str.size(); i++)
        {
            if(index[str[i]-'a']==0) index[str[i]-'a'] = i+1;
        }
        
        int ans = INT_MAX;
        for(int i=0; i<patt.size(); i++)
        {
            if(index[patt[i]-'a']!=0) ans = min(ans, index[patt[i]-'a']);
        }
  
        if(ans==INT_MAX) ans = 0;
        return ans-1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends