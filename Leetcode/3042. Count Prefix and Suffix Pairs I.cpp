#include <bits/stdc++.h>
using namespace std;

int countPrefixSuffixPairs(vector<string>& words) 
{
    int ans = 0;
    string temp, x;
    for(int i = 0; i < words.size(); i++)
    {
        for(int j = i + 1; j < words.size(); j++)
        {
            if(words[j].find(words[i]) == 0)
            {
                temp = words[j];
                x = words[i];
                reverse(temp.begin(), temp.end());
                reverse(x.begin(), x.end());
                if(temp.find(x) == 0) ans++;
            }
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}