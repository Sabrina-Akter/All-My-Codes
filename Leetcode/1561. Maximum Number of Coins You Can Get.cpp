#include <bits/stdc++.h>
using namespace std;

int maxCoins(vector<int>& piles) {
        int i, j=0, sum=0, n=piles.size()/3;
        sort(piles.begin(), piles.end());
        for(i=piles.size()-1;i>=n;i--)
        {
            j++;
            if(j%2==0)
            {
                sum+=piles[i];
            }
        }
        return sum;     
    }

int main()
{
    vector <int> v = {9,8,7,6,5,1,2,3,4};
    maxCoins(v);
    return 0;
}