//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution 
{
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) 
    {
        long long total = arr1.size() + arr2.size();
        int pos1 = total / 2, pos2 = pos1 + 1;
        int mid1 = -1, mid2 = -1;
        int i = 0, j = 0;
        int cnt = 0;
        while(1)
        {
            if(mid1 != -1 && mid2 != -1) break;
            cnt++;
            if(i >= arr1.size() && j < arr2.size())
            {
                if(cnt == pos1) mid1 = arr2[j];
                if(cnt == pos2) mid2 = arr2[j];
                j++;                
            }
            else if(j >= arr2.size() && i < arr1.size())
            {
                if(cnt == pos1) mid1 = arr1[i];
                if(cnt == pos2) mid2 = arr1[i];
                i++;                
            }
            else if(arr1[i] <= arr2[j])
            {
                if(cnt == pos1) mid1 = arr1[i];
                if(cnt == pos2) mid2 = arr1[i];
                i++;
            }
            else if(arr2[j] <= arr1[i])
            {
                if(cnt == pos1) mid1 = arr2[j];
                if(cnt == pos2) mid2 = arr2[j];
                j++;
            }
        }
        return mid1 + mid2;
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends