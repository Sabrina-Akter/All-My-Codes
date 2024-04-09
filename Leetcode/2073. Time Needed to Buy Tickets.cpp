#include <bits/stdc++.h>
using namespace std;

int timeRequiredToBuy(vector<int>& tickets, int k) 
{
    int n = tickets.size();
    int mn = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        mn = min(mn, tickets[i]);
    }
    vector <int> time(n);
    for(int i = 0; i < n; i++)
    {
        time[i] = (mn - 1) * n;
        tickets[i] = tickets[i] - mn + 1;
    }
    int mx = time[0];
    while(1)
    {
        for(int i = 0; i < n; i++)
        {
            if(i == k && tickets[i] == 0)
            {
                return time[i];
            }
            else if(tickets[i] != 0)
            {
                tickets[i]--;
                time[i] = mx + 1;
            }
            mx = max(mx, time[i]);
        }
    }
    return 0;
}

int main()
{
    

    return 0;
}