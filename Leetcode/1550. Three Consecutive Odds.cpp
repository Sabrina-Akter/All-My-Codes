#include <bits/stdc++.h>
using namespace std;

bool threeConsecutiveOdds(vector<int>& arr) 
{
    int cnt = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] % 2 == 0) cnt = 0;
        else cnt++;
        if(cnt == 3) return true;
    }
    return false;
}

int main()
{

    return 0;
}