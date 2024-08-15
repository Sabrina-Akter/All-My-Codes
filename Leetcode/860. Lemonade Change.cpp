#include <bits/stdc++.h>
using namespace std;

bool lemonadeChange(vector<int>& bills) 
{
    vector <int> freq(21);
    for(int i = 0; i < bills.size(); i++)
    {
        if(bills[i] == 5)
        {
            freq[5]++;
        }
        else if(bills[i] == 10)
        {
            freq[10]++;
            if(freq[5] >= 1) freq[5]--;
            else return false;
        }
        else if(bills[i] == 20)
        {
            if(freq[10] >= 1 && freq[5] >= 1)
            {
                freq[10]--;
                freq[5]--;
            }
            else if(freq[5] >= 3) freq[5] -= 3;
            else return false;
        }
    }
    return true;
}

int main()
{
    

    return 0;
}