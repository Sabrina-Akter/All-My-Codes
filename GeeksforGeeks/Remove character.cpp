//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution 
{
  public:
    string removeChars(string string1, string string2) 
    {
        unordered_map <char, int> letter;
        for(auto &it : string2)
        {
            letter[it] = 1;
        }
        string ans;
        for(auto &it : string1)
        {
            if(letter[it] != 1) ans += it;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}

// } Driver Code Ends