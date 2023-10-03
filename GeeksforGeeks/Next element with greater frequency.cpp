//{ Driver Code Starts
#include <bits/stdc++.h>
#define N 10000
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> print_next_greater_freq(int arr[], int n)
    {
        vector <int> res(n);
        map <int, int> freq;
        int i;
        for(i=0;i<n;i++)
        {
            freq[arr[i]]++;
        }
        stack<int> s;
        s.push(0);

        for (int i = 1; i < n; i++)
        {
            if (freq[arr[s.top()]] > freq[arr[i]])
                s.push(i);
            else
            {
                while (!s.empty() && freq[arr[s.top()]] < freq[arr[i]])
                {
                    res[s.top()] = arr[i];
                    s.pop();
                }
                s.push(i);
            }
        }

        while (!s.empty())
        {
            res[s.top()] = -1;
            s.pop();
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int arr[N];

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution ob;
        vector<int> ans = ob.print_next_greater_freq(arr, n);
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 1;
}

// } Driver Code Ends