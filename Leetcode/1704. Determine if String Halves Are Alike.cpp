#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    bool halvesAreAlike(string s) 
    {
        int n = s.size();
        int half = n / 2;
        unordered_map <char, int> vowel = {{'a', 0}, {'e', 0}, {'i', 0}, {'o', 0}, {'u', 0}, {'A', 0}, {'E', 0}, {'I', 0}, {'O', 0}, {'U', 0}};

        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i < half; i++)
        {
            if(vowel.count(s[i])) count1++;
        }
        for(int i = half; i < n; i++)
        {
            if(vowel.count(s[i])) count2++;
        } 
        cout << count1 << " " << count2 << endl;
        return (count1 == count2) ? true : false;
    }
};

int main()
{
    

    return 0;
}