#include <bits/stdc++.h>
using namespace std;

bool threeConsecutiveOdds(vector<int>& arr) 
{
    for(int i = 0; i < arr.size(); i++)
    {
        if((i + 2 < arr.size()) && arr[i] % 2 == 1 && arr[i + 1] % 2 == 1 && arr[i + 2] % 2 == 1)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    

    return 0;
}