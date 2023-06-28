#include <bits/stdc++.h>
using namespace std;

int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map <int, int> m;
        int i, cnt=0, sum=0;
        for(i=0;i<banned.size();i++)
        {
            m[banned[i]]=1;
        } 
        for(i=1;i<=n;i++) 
        {
            if(m[i]==0)
            {
                if(sum+i<=maxSum)
                {
                    sum+=i;
                    cnt++;
                }
                else
                {
                    break;
                }
            }
        } 
        return cnt;
    }

int main()
{
    

    return 0;
}