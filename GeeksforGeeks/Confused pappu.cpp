//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
long long findDiff(long long n);

int main(){
    long t;
    cin>>t;
    while(t--){
        long long amount;
        cin>>amount;
        cout<<findDiff(amount)<<endl;
    }
    return 0;
}
// } Driver Code Ends


long long findDiff(long long amount)
{
    string s;
    long long n = amount;
    long long x;
    while(n != 0)
    {
        x = n % 10;
        if(x == 6) x = 9;
        s += x + '0';
        n /= 10;
    }
    reverse(s.begin(), s.end());
    n = stoll(s);
    return max(n, amount) - min(n, amount);
}