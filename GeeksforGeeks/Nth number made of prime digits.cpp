//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to find nth number made of only prime digits.
    int primeDigits(int n)
    {
        unordered_map <char, int> prime = {{'2', 1}, {'3', 1}, {'5', 1}, {'7', 1}};
        int cnt = 0;
        for(int i = 2; i <= 2277; i++)
        {
            string s = to_string(i);
            bool ok = true;
            for(auto &c : s)
            {
                if(prime.count(c) == false){ ok = false; break; }
            }
            if(ok == true) cnt++;
            if(cnt == n) return i;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    // All the above tasks are preprocessing, now you can run testcases
    // and then print the values accordingly
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout << ob.primeDigits(n) << "\n";   
    }
}

// } Driver Code Ends