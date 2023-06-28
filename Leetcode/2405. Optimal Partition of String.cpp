#include <bits/stdc++.h>
using namespace std;

int partitionString(string s) {
        int i, cnt=1;
        unordered_map <char, int> m;
        for(i=0;i<s.size();i++)
        {
            m[s[i]]++;
            if(m[s[i]]==2)
            {
                cnt++;
                m.clear();
                m[s[i]]++;
            }
        }
        cout << cnt << endl;
        return cnt;
    }

int main()
{
    string s = "ssssss";
    partitionString(s);
    return 0;
}