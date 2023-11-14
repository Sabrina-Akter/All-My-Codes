#include <bits/stdc++.h>
using namespace std;

//TC = O(|s|)
//SC = O(1); Because the sizes of the two unordered maps are constant (7 and 6).
class Solution 
{
public:
    int romanToInt(string s) 
    {
        int sum = 0;
        unordered_map <char, int> singles = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        unordered_map <string, int> doubles = {{"IV", 4}, {"IX", 9}, {"XL", 40}, {"XC", 90}, {"CD", 400}, {"CM", 900}};
        
        for(int i = 0; i < s.size(); i++)
        {
            string combo;
            if(i + 1 < s.size()) combo = s.substr(i, 2);
            if(doubles[combo] == 0) sum += singles[s[i]];
            else
            {
                sum += doubles[combo];
                i++;
            } 
        }
        return sum;
    }
};

int main()
{
    return 0;
}