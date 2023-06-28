#include <bits/stdc++.h>
using namespace std;

int countPalindromicSubsequence(string s) {
        int i, j, cnt=0;
        unordered_map <char, int> c1, c2, exist;
        unordered_map<pair<char,char>,int> m;
        string a = "abcdefghijklmnopqrstuvwxyz";
        for(i=0;i<s.size();i++)
        {
            exist[s[i]]++;
            if(exist[s[i]]==1)
            {
                c1[s[i]] = i;
            }
            c2[s[i]] = i;
        }
        for(i=1;i<s.size()-1;i++)
        {
            for(j=0;j<a.size();j++)
            {
                if(exist[a[j]]>=2 && c1[a[j]]<i && c2[a[j]]>i && m[{s[i], a[j]}]==0)
                {
                    cnt++;
                    m[{s[i], a[j]}] = 1;
                }
            }
        }
        cout << cnt << endl;
        return cnt;
    }

int main()
{
    string s = "aaaaaaaaaaa";
    countPalindromicSubsequence(s);
    return 0;
}