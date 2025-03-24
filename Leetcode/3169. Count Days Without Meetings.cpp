#include <bits/stdc++.h>
using namespace std;

int countDays(int days, vector<vector<int>>& meetings) 
{
    sort(meetings.begin(), meetings.end());
    int first = 0, last, sum = 0;
    for(auto &it : meetings)
    {
        if(first == 0)
        {
            first = it[0];
            last = it[1];
        }
        else
        {
            if(it[0] >= first && it[0] <= last)
            {
                if(it[1] > last) last = it[1];
            }
            else
            {
                sum += (last - first + 1);
                first = it[0];
                last = it[1];
            }
        }
    }
    sum += (last - first + 1);
    return days - sum;
}

int main()
{
    

    return 0;
}