#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
        map<char,int> m;
        int i;
        for(i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        vector<pair<int, char> > v;
        for(auto it=m.begin(); it!=m.end();it++)
        {
            v.push_back({(*it).second, (*it).first});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        string ans;
        for(auto it=v.begin(); it!=v.end(); it++)
        {
            for(i=0;i<(*it).first;i++)
            {
                ans+=(*it).second;
            }
        }
        cout << ans << endl;
        return ans;
    }

int main()
{
    string  s = "Aabb";
    frequencySort(s);
    return 0;
}