//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int minManipulation (int n, string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << minManipulation (n, s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minManipulation (int N, string S1, string S2)
{
    unordered_map <char, int> m;
    for(int i = 0; i < N; i++)
    {
        m[S1[i]]++;
        m[S2[i]]--;
    }
    int sum = 0;
    for(auto &it : m)
    {
        if(it.second < 0) sum += it.second;
    }
    sum = abs(sum);
    return sum;
}