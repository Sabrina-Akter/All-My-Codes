#include <bits/stdc++.h>
using namespace std;

int numSplits(string s) {
    unordered_map <int, int> m1, m2;
    unordered_map <char, int> x1, x2;
    int i, cnt, ans=0;
    cnt = 0;
    for(i=0;i<s.size();i++)
    {
        x1[s[i]]++;
        if(x1[s[i]]==1)
        {
            cnt++;
        }
        x1[i] = cnt;
        m1[i] = x1[i];
    } 
    cnt = 0;
    for(i=s.size()-1;i>=0;i--)
    {
        x2[s[i]]++;
        if(x2[s[i]]==1)
        {
            cnt++;
        }
        x2[i] = cnt;
        m2[i] = x2[i];
        if(m2[i]==m1[i-1])
        {
            ans++;
        }
    }  
    cout << ans << endl; 
    return ans;
    }

int main()
{
    string s = "aacaba";
    numSplits(s);
    return 0;
}