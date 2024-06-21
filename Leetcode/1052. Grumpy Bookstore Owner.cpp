#include <bits/stdc++.h>
using namespace std;

int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) 
{
    int n = customers.size();
    int total = 0;
    for(int i = 0; i < n; i++)
    {
        if(grumpy[i] == 0) total += customers[i];
    }
    int cnt = 0, sum = 0, mx = 0, x = 0;
    for(int i = 0; i < n; i++)
    {
        cnt++;
        if(grumpy[i] == 1) sum += customers[i];
        if(cnt > minutes)
        {
            if(grumpy[x] == 1) sum -= customers[x];
            cnt--;
            x++;
        }
        mx = max(mx, sum);
    }
    return mx + total;
}

int main()
{
    

    return 0;
}