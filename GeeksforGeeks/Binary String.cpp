//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a)
    {
        string all_one;
        for(auto &it : a)
        {
            if(it == '1') all_one += it;
        }
        long ans = 0;
        long cnt;
        for(int i = 0; i < all_one.size(); i++)
        {
           cnt = all_one.size() - i - 1;
           ans += cnt;
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main()
{
    int t,n,count;
    string a;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin >> n;
        cin >> a;
        Solution obj;
        cout << obj.binarySubstring(n, a) << endl;
    }
}

// } Driver Code Ends