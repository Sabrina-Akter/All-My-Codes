#include <bits/stdc++.h>
using namespace std;

    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int i, f=0;
        char ch;
        for(i=0;i<s.size();i++)
        {
            if(s[i]!=t[i])
            {
                ch = t[i];
                f = 1;
                break;
            }
        }
        if(f==0)
        {
            ch = t[t.size()-1];
        }
        return ch;
    }

int main()
{
    string s, t;
    cin >> s >> t;
    cout << findTheDifference(s, t) << endl;

    return 0;
}