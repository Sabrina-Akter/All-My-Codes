//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector <int>  f(int N, vector <int> &ans, vector <int> &notes)
    {
        if(N == 0)
        {
            return ans;
        }
        else if (N > 0)
        {
            for(int i = notes.size() - 1; i >= 0; i--)
            {
                if(notes[i] <= N)
                {
                    int div = N / notes[i];
                    for(int j = 1; j <= div; j++)
                    {
                        ans.push_back(notes[i]);
                    }
                    f(N - (div * notes[i]), ans, notes);
                    break;
                }
            }            
        }
        return ans;
    }
    vector<int> minPartition(int N)
    {
        vector <int> notes = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        vector <int> ans;
        f(N, ans, notes);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends