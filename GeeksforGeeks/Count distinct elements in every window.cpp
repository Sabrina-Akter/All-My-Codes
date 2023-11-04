//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

//TC = O(|s|)
//SC = O(1)
class Solution {
public:
    int myAtoi(string s) {
        double ans = 0; 
        int sign = 1;
        int found = 0;
        for(int i = 0; i < s.size(); i++)
        {
            //Finding the very first valid character (whitespace doesn't count as a character)
            if(found == 0)
            {
                if(s[i] == ' ') continue;
                if(s[i] == '-') sign = -1;
                else if(s[i] == '+') sign = 1;
                else if(s[i] >= '0' && s[i] <= '9') ans = (10 * ans) + (s[i] - '0');
                else break;
                found = 1;
            }
            else
            {
                if(s[i] >= '0' && s[i] <= '9') ans = (10 * ans) + (s[i] - '0');
                else break;
            }
        }
        ans = sign * ans;
        if(ans < INT_MIN) ans = INT_MIN;
        else if(ans > INT_MAX) ans = INT_MAX;
        return int(ans);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends