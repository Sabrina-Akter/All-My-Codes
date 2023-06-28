#include <bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int mx = INT16_MIN, i, mn=INT16_MAX;
    for(i=0;i<piles.size();i++)
    {
        mx = max(mx, piles[i]);
    }
    int left=1, right=mx, mid, f=0;
    while(left<=right) 
    {
        int cnt=0;
        mid = (left+right)/2;
        for(i=0;i<piles.size();i++)
        {
            cnt+=(piles[i]/mid);
            if(piles[i]%mid!=0)
            {
                cnt++;
            }
        }
        if(cnt<=h)
        {
            right = mid-1;
        }
        else if(cnt>h)
        {
            left = mid+1;
        }
        if(cnt==h)
        {
            f=1;
        }
        if(f==1)
        {
            if(cnt==h)
            {
                mn = min(mn, mid);
            }
            else
            {
                break;
            }
        }
    }
    return mn;
    }

int main()
{
    vector <int> piles = {10};
    int h = 9;
    minEatingSpeed(piles, h);
    return 0;
}