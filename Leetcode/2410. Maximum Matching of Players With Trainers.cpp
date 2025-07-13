#include <bits/stdc++.h>
using namespace std;

int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) 
{
    int i = 0, j = 0, n1 = players.size(), n2 = trainers.size();
    sort(players.begin(), players.end());
    sort(trainers.begin(), trainers.end());
    int ans = 0;
    while(1)
    {
        if(trainers[j] >= players[i]) i++, j++, ans++;
        else j++;
        if(i == n1 || j == n2) break;
    }
    return ans;
}

int main()
{
    

    return 0;
}