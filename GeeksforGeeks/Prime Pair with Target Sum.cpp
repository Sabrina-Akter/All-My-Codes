//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution 
{
  public:
    void sieveOfEratosthenes(int limit, vector<bool>& isPrime) 
    {
        isPrime[0] = isPrime[1] = false; 
        for (int i = 2; i * i <= limit; ++i) 
        {
            if (isPrime[i]) 
            {
                for (int j = i * i; j <= limit; j += i) 
                {
                    isPrime[j] = false;
                }
            }
        }
    }
    vector<int> getPrimes(int n) 
    {
        
        vector<bool> isPrime(n + 1, true);

        sieveOfEratosthenes(n, isPrime);

        for (int i = 2; i <= n; ++i) 
        {
            if (isPrime[i] && isPrime[n - i]) 
            {
                vector <int> ans = {i, n - i};
                return ans;
            }
        }
        vector <int> ans = {-1, -1};
        return ans;        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        vector<int> res = obj.getPrimes(n);

        Array::print(res);
    }
}

// } Driver Code Ends