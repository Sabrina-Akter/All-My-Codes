#include <bits/stdc++.h>
using namespace std;

    bool buddyStrings(string s, string goal) {
        map <char, int> m;
        vector <int> ind;
        int i, did_not_match=0, mx = INT_MIN;
        for(i=0;i<s.size();i++)
        {
            m[s[i]]++;
            mx = max(mx, m[s[i]]);
            if(s[i]!=goal[i])
            {
                did_not_match++;
                ind.push_back(i);
            }
        }
        if(did_not_match==2 && s.size()==goal.size())
        {
            if(s[ind[0]]==goal[ind[1]] && s[ind[1]]==goal[ind[0]])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if(did_not_match==0  && s.size()==goal.size())
        {
            if(mx>=2)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else 
        {
           return false; 
        }
    }

int main()
{
    string a, b;
    cin >> a >> b;
    cout << buddyStrings(a, b);

    return 0;
}