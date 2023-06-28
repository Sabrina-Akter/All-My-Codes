#include <bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k) {
    int i, j, left=0, right, length=1, mx=INT32_MIN, rest, mx_len=INT32_MIN;
    map <char, int> m;
    string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(i=0;i<s.size();i++)
    {
        mx=INT32_MIN;
        right = i;
        length = right-left+1;
        m[s[i]]++;
        for(j=0;j<alp.size();j++)
        {
            mx = max(mx, m[alp[j]]);
        }
        rest = length - mx;
        if(rest>k)
        {
            m[s[left]]--;
            left++;
        }
        length = right-left+1;
        mx_len = max(mx_len, length);
        cout << mx_len << endl;
    }
    return mx_len;
    }

int main()
{
    string s = "ABA";
    int k = 2;
    characterReplacement(s, k);
    return 0;
}