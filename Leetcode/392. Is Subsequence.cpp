#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
    bool ans=false;
    int i=0, j, cnt = 0;
    for(j=0;j<t.size();j++)
    {
        if(i>=s.size())
        {
            break;
        }
        else if(s[i]==t[j])
        {
            cnt++;
            i++;
        }
    }
    if(cnt==s.size())
    {
        ans = true;
    }
    cout << ans << endl;
    return ans;    
    }

int main()
{
    string s = "", t = "";
    isSubsequence(s, t);

    return 0;
}