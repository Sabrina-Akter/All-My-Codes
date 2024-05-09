#include <bits/stdc++.h>
using namespace std;

long long maximumHappinessSum(vector<int>& h, int k) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sort(h.begin(),h.end(),greater<int>());
    
    int i=0;
    long long ans=0;
    while(k--){
        h[i]=max(h[i]-i,0);
        ans+=h[i];
        i++;
    }
    return ans;
}

int main()
{
    

    return 0;
}