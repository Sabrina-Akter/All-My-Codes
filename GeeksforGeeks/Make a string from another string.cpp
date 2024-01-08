//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool isPoss (string A, string B);
int main()
{
    int t; cin >> t;
    char ch;
    while (t--)
    {
        string A; cin >> A;
        string B; cin >> B;
        cout << isPoss (A, B) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


//User function Template for C++

bool isPoss (string A, string B)
{
    unordered_map <char, int> x, y;
    for(int i = 0; i < A.size(); i++)
    {
        x[A[i]]++;
    }
    for(int i = 0; i < B.size(); i++)
    {
        y[B[i]]++;
    }
    for(auto &it : x)
    {
        if(x[it.first] > y[it.first]) return false;
    }
    return true;
}