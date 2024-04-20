//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector <int> ans;
        int p1 = 0, p2 = 0;
        while(1)
        {
            if(arr1[p1] == arr2[p2])
            {
                if((ans.size() == 0) || (ans.size() > 0 && ans.back() != arr1[p1]))
                {
                    ans.push_back(arr1[p1]);
                }
                p1++;
                p2++;
            }
            else if(arr1[p1] < arr2[p2])
            {
                if((ans.size() == 0) || (ans.size() > 0 && ans.back() != arr1[p1]))
                {
                    ans.push_back(arr1[p1]);
                }
                p1++;
            }
            else if(arr2[p2] < arr1[p1])
            {
                if((ans.size() == 0) || (ans.size() > 0 && ans.back() != arr2[p2]))
                {
                    ans.push_back(arr2[p2]);
                }
                p2++;
            }
            if(p1 >= n && p2 >= m) break;
            else if(p2 >= m)
            {
                for(int i = p1; i < n; i++)
                {
                    if((ans.size() == 0) || (ans.size() > 0 && ans.back() != arr1[i]))
                    {
                        ans.push_back(arr1[i]);
                    }
                }
                break;
            }
            else if(p1 >= n)
            {
                for(int i = p2; i < m; i++)
                {
                    if((ans.size() == 0) || (ans.size() > 0 && ans.back() != arr2[i]))
                    {
                        ans.push_back(arr2[i]);
                    }
                }
                break;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends