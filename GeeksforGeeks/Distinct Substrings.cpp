//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int fun(string s);

int main() {
    int tt;
    string s;
    cin >> tt;
    while (tt--) {
        cin >> s;
        cout<<fun(s)<<endl;
        
    }
    return 0;
}
// } Driver Code Ends


int fun(string s)
{
    set <string> S;
    string temp, s1, s2;
    for(int i = 1; i < s.size(); i++)
    {
        s1 = s[i - 1];
        s2 = s[i];
        temp = s1 + s2;
        S.insert(temp);
    }
    return S.size();
}
