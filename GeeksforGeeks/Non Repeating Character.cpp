//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {       
       vector <int> freq(26);
       for(int i = 0; i < S.size(); i++)
       {
           freq[S[i] - 'a']++;
       }
       for(int i = 0; i < S.size(); i++)
       {
           if(freq[S[i] - 'a'] == 1) return S[i];
       }
       return '$';
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends