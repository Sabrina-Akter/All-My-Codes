#include <bits/stdc++.h>
using namespace std;

    int lengthOfLongestSubstring(string s) {
        int n = s.size(), i, last=1, now, mx=1, ans;
        map <char, int> d, p;

        for(i=0;i<n;i++)
        {
            d[s[i]]++;
            now = i+1;
            if(d[s[i]]==1)
            {
                ans = now - last + 1;
            }
            else 
            {
                ans = now - max(p[s[i]], last-1);
            }
            if(d[s[i]]>=2)
            {
                last = max(last, p[s[i]]+1);
            }
            mx = max(mx, ans);
            p[s[i]] = now;
        }
        if(n==0)
        {
            mx = 0;
        }
        return mx;
    }

int main()
{
    string s = "pwwkewp*)/^";
    lengthOfLongestSubstring(s);
    return 0;
}