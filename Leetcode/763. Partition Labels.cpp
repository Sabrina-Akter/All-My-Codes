#include <bits/stdc++.h>
using namespace std;

vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_map <char, int> p, m1, m2;
        int i;
        for(i=0;i<s.size();i++)    
        {
            p[s[i]]++;
            if(p[s[i]]==1)
            {
                m1[s[i]] = i;
            }
            m2[s[i]] = i;
        }  
        int f, l, sum=0;
        for(i=0;i<s.size();i++)  
        {
            sum++;
            if(i==0)
            {
                f=m1[s[i]];
                l=m2[s[i]];
            }
            if(m1[s[i]]>=f && m2[s[i]]<=l)
            {
                
            }
            else if(m1[s[i]]>l)
            {
               cout << sum-1 << endl;
               ans.push_back(sum-1);
               f = m1[s[i]];
               l = m2[s[i]];
               sum=1;
            }
            else if(m2[s[i]]>l)
            {
               l = m2[s[i]];
            }           
        }
        ans.push_back(sum);
        cout << sum << endl;
        return ans;
    }

int main()
{
    string s = "abbccddefeg";
    partitionLabels(s);
    return 0;
}