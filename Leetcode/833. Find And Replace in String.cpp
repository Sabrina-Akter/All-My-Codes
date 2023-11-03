#include <bits/stdc++.h>
using namespace std;

//TC = O(|s|*K); K = Maximum length of the 'source' string.
//SC = O(|s|)
class Solution 
{
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) 
    {
        vector <pair<int, int>> sorted;
        //SC = O(N); N = Number of elements in the 'indices' vector.
        for (int i = 0 ; i < indices.size(); i++) sorted.push_back({indices[i], i});
        //TC = O(N*logN);
        sort(sorted.begin(), sorted.end());

        string ans;
        int ptr = 0;
        //TC = O(|s|*K)
        for(int i = 0; i < s.size(); i++)
        {
            int index = sorted[ptr].first;
            if(index != i) ans += s[i];
            else
            {        
                string source = sources[sorted[ptr].second];
                string target = targets[sorted[ptr].second];
                //TC = O(K); K = Maximum length of the 'source' string for substr() operation.
                if(s.substr(i, source.size()) == source)
                {
                    ans += target;
                    i += source.size()-1;
                }
                else
                {
                    //if duplicate index values are present in the 'indices' vector:
                    if(ptr + 1 < indices.size() && index == sorted[ptr+1].first) i--;
                    else ans += s[i];
                }
                if(ptr + 1 < indices.size()) ptr++;
            }
        }
        //SC = O(|s|)
        return ans;
    }
};

int main()
{
    

    return 0;
}