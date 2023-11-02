#include <bits/stdc++.h>
using namespace std;

//TC = O(|s| + |words| * (|word| * log|s|)); 
//SC = O(1); The "index" vector's size is constant (26).
class Solution {
public:
    vector <int> index[26];
    //TC = O(|word| * log|s|)
    bool isSubseq(string &s, string &word)
    {
        int last = -1;
        for(int i = 0; i < word.size(); i++)
        {
            int order = word[i]-'a';
            int next = upper_bound(index[order].begin(), index[order].end(), last) - index[order].begin();
            if(next == index[order].size()) return false;
            last = index[order][next];
        }
        return true;
    }

    int numMatchingSubseq(string s, vector<string>& words) {
        //TC = O(|s|); Here, every character of the string "s" is being traversed.
        for(int i = 0; i < s.size(); i++)
        {
            index[s[i] - 'a'].push_back(i);
        }

        //TC = O(|words| * func_time); Here, every word of the "words" vector is being traversed.
        int count = 0;
        for(auto &word:words)
        {
            count += isSubseq(s, word);
        }
        return count;
    }
};

int main()
{
    

    return 0;
}