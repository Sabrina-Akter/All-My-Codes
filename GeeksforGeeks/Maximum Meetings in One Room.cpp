//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F)
    {
        vector <pair<pair<int,int>,int>> x;
        for(int i = 0; i < N; i++)
        {
            x.push_back({{F[i],S[i]},i+1});
        }
        sort(x.begin(), x.end());
        int finVal = x[0].first.first;
        vector <int> ans;
        ans.push_back(x[0].second);
        for(int i = 1;i < N; i++)
        {
            if(x[i].first.second > finVal)
            {
                finVal = x[i].first.first;
                ans.push_back(x[i].second);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends