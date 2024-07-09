#include <bits/stdc++.h>
using namespace std;

double averageWaitingTime(vector<vector<int>>& customers) 
{
    double sum = 0;
    double n = customers.size();
    int start = customers[0][0];
    for(int i = 0; i < customers.size(); i++)
    {
        int arrive = customers[i][0];
        int prepare = customers[i][1];
        if(arrive > start) start = arrive;
        int total = start + prepare; 
        start = total;
        int time = total - arrive;
        sum += time;
    }
    return sum / n;
}

int main()
{
    

    return 0;
}