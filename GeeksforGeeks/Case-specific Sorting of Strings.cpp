//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        string low;
        string high;
        vector <int>  Case;
        for(int i = 0; i < n; i++)
        {
            if(islower(str[i]))
            {
                low += str[i];
                Case.push_back(0);
            }
            else
            {
                high += str[i];
                Case.push_back(1);              
            }
        }
        sort(low.begin(), low.end());
        sort(high.begin(), high.end());
        int j = 0;
        int k = 0;
        string ans;
        for(int i = 0; i < n; i++)
        {
            if(Case[i] == 0)
            {
                ans += low[j];
                j++;
            }
            else
            {
                ans += high[k];
                k++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends