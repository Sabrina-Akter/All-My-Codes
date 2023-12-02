#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int countCharacters(vector<string>& words, string chars) 
    {
       unordered_map <char, int> Count;
       for(auto &c : chars) Count[c]++;
       int sum = 0;
       for(auto &word : words) 
       {
           unordered_map <char, int> temp;
           bool yes = true;
           for(auto &c : word)
           {
               temp[c]++;
               if(Count.count(c) == false || temp[c] > Count[c])
               {
                   yes = false;
                   break;
               }
           }
           if(yes == true) sum += word.size();
       }
       return sum;
    }
};

int main()
{
    

    return 0;
}