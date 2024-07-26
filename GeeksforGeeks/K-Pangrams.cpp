//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:

    bool kPangram(string str, int k) 
    {
        vector <int> letters(26);
        int size = 0;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                letters[str[i] - 'a'] = 1;
                size++;                
            }
        }
        int cnt = 0;
        for(int i = 0; i < 26; i++)
        {
            if(letters[i] == 1) cnt++;
        }
        int change = 26 - cnt;
        int rest = size - cnt;

        return (rest >= change && k >= change);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends