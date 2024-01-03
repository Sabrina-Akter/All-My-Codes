#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int numberOfBeams(vector<string>& bank) 
    {
        vector <int> ones;
        for(auto floor : bank)
        {
            int one = 0;
            for(auto cell : floor) if(cell == '1') one++;
            if(one > 0) ones.push_back(one);
        }
        if(ones.size() <= 1) return 0;
        int sum = 0;
        for(int i = 0; i < ones.size() - 1; i++)
        {
            sum += (ones[i] * ones[i + 1]);
        }
        return sum;
    }
};

int main()
{
    

    return 0;
}