//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) 
    {
        vector <int> freq(N);
        unordered_map <int, int> cnt;
        for(int i = N-1; i >= 0; i--)
        {
            cnt[A[i]]++;
            freq[i] = cnt[A[i]];
        }
        vector <int> ans;
        for(int i = 0; i < num; i++)
        {
            int left = Q[i][0];
            int right = Q[i][1];
            int fr = Q[i][2];
            int sum = 0;
            for(int j = left; j <= right; j++)
            {
                if(freq[j] == fr) sum++;
            }
            ans.push_back(sum);
        }
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
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends