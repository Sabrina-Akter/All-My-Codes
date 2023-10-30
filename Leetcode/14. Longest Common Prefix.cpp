#include <bits/stdc++.h>
using namespace std;

//TC = O(S), where S is the sum of all characters in all strings.
//SC = O(1)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];

        string first_str = strs[0];
        string ans;
        int n = first_str.size();
        int N = strs.size();

        for(int i=0; i<n; i++)
        {
            for(int j=1; j<N; j++)
            {
                string cur_str = strs[j];
                if(i>=cur_str.size() || first_str[i]!=cur_str[i]) return ans;
            }
            ans+=first_str[i];
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}