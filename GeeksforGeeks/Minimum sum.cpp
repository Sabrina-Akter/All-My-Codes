//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution 
{
  public:
    string minSum(vector<int> &arr) 
    {
        sort(arr.begin(), arr.end());
        string num1, num2;
        for(int i = 0; i < arr.size(); i++)
        {
            if(i % 2 == 0) num1 += (arr[i] + '0');
            else num2 += (arr[i] + '0');
        }
        int len1 = num1.size(), len2 = num2.size();
        int carry = 0;
        string result = "";
    
        int i = len1 - 1, j = len2 - 1;
        while (i >= 0 || j >= 0 || carry) {
            int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
            int digit2 = (j >= 0) ? num2[j--] - '0' : 0;
            
            int sum = digit1 + digit2 + carry;
            carry = sum / 10;
            result += (sum % 10) + '0';
        }
    
        reverse(result.begin(), result.end());
    
        size_t pos = result.find_first_not_of('0');
        return (pos != string::npos) ? result.substr(pos) : "0";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends