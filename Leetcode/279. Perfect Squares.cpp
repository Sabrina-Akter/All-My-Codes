#include <bits/stdc++.h>
using namespace std;

vector<int>v;
int ans=100000;

void func(int target, int sum, int element, vector<int>&v)
{
    if(element>ans)
    {
        return;
    }
    //base
    if(sum>=target)
    {
        if(sum==target)
        {
            ans = min(element, ans);
        }
        return;
    }
    //recursion
    int i;
    for(i=0;i<v.size();i++)
    {
        int x = (target-sum)/v[i];
        if(sum+(x*v[i])<=target && x>0)
        {
            func(target, sum+(x*v[i]), element+x, v);
        }
    }
}

int numSquares(int n) {
        int i;
        for(i=1;i<=100;i++)
        {
            v.push_back(i*i);
        }
        reverse(v.begin(),v.end());
        func(n, 0, 0, v);
        cout << ans << endl;
        return ans;
    }

int main()
{
    int n = 5156;
    numSquares(n);
    return 0;
}