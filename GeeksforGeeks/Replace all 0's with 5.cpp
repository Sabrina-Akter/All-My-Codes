//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) 
{
    string number = to_string(n);
    for(int i = 0; i < number.size(); i++)
    {
        if(number[i] == '0') number[i] = '5';
    }
    return stoi(number);
}