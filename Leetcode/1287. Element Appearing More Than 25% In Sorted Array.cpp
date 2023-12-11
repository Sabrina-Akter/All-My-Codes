#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int findSpecialInteger(vector<int>& arr) 
    {
        double n = arr.size();
        double twenty_five = 0.25 * n;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(i > 0 && arr[i] == arr[i-1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            if(count > twenty_five) return arr[i];
        }
        return 0;
    }
};

int main()
{
    

    return 0;
}