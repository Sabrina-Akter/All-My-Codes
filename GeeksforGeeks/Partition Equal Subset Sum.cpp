//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector <vector<int>> ans;

    void f(int ind, int sum, int N,  int arr[], vector <int>& v, int div)
    {
        if(ind==N-1)
        {
            if(sum==div)
            {
                ans.push_back(v);
            }
        }
        else
        {
            f(ind+1, sum, N, arr, v, div);
            v.push_back(ind+1);
            f(ind+1, sum+arr[ind+1], N, arr, v, div);
            v.pop_back();
        }
    }
    int equalPartition(int N, int arr[])
    {
        int i, j, k, sum=0;
        for(i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        if(sum%2==0)
        {
            vector <int> v;
            int div = sum/2, flag=0;
            f(-1, 0, N, arr, v, div);
            for(i=0;i<ans.size();i++)
            {
                for(j=i+1;j<ans.size();j++)
                {
                    if(ans[i].size()+ans[j].size()==N)
                    {
                        set <int> s;
                        for(k=0;k<ans[i].size();k++)
                        {
                            s.insert(ans[i][k]);
                        }
                        for(k=0;k<ans[j].size();k++)
                        {
                            s.insert(ans[j][k]);
                        }
                        if(s.size()==N)
                        {
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==1)
                {
                    break;
                }
            }
            if(flag==1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends