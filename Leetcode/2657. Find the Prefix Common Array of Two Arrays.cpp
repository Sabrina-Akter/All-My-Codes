#include <bits/stdc++.h>
using namespace std;

vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) 
{
    map <int, int> mp;
    int n = A.size(), cnt = 0;
    vector <int> ans(n);
    for(int i = 0; i < n; i++) 
    {
        mp[A[i]]++;
        if(mp[A[i]] == 2) cnt++;
        mp[B[i]]++;
        if(mp[B[i]] == 2) cnt++;
        ans[i] = cnt;
    }
    return ans;
}

int main()
{
    

    return 0;
}