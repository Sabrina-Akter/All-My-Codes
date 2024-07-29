#include <bits/stdc++.h>
using namespace std;

    int numTeams(vector<int>& rating) 
    {
        int n = rating.size();
        vector <int> less(n), greater(n);
        for(int i = 0; i < n; i++)
        {
            int sum1 = 0;
            int sum2 = 0;
            for(int j = i + 1; j < n; j++)
            {
                if(rating[j] < rating[i]) sum1++;
                if(rating[j] > rating[i]) sum2++;
            }
            less[i] = sum1;
            greater[i] = sum2;
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(rating[j] < rating[i]) ans += less[j];
            }
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(rating[j] > rating[i]) ans += greater[j];
            }
        }
        return ans;
    }

int main()
{
    

    return 0;
}