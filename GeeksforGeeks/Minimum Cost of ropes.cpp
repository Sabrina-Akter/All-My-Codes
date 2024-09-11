//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) 
    {
        if(arr.size() == 1) return 0;
        priority_queue <int, vector<int>, greater<int>> pq;
        for(int i = 0; i < arr.size(); i++)
        {
            pq.push(arr[i]);
        }
        long long ans = 0;
        while(pq.size() >= 2)
        {
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            long long sum = a + b;
            ans += sum;
            pq.push(sum);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends