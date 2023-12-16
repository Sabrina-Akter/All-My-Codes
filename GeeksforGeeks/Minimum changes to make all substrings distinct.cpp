//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minChange(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << minChange(s) << endl;
    }
return 0;
}

// } Driver Code Ends


int minChange(string S) 
{ 
     int ans = 0;
     vector <int> count(26);
     for(int i = 0; i < S.size(); i++)
     {
         count[S[i] - 'a']++;
         if(count[S[i] - 'a'] > 1) ans++;
     }
     return ans;
} 
