#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        vector <int> all;
        for(int i = 2; i <= 9; i++)
        {
            for(int j = 1; j <= 9 - i + 1; j++)
            {
                string temp;
                int k = j;
                int cnt = 0;
                while(1)
                {
                    temp += k + '0';
                    k++;
                    cnt++;
                    if(cnt == i) break;
                }
                all.push_back(stoi(temp));
            }
        }
        vector <int> ans;
        for(auto &num : all)
        {
            if(num >= low && num <= high) ans.push_back(num);
            else if(num > high) break;
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}