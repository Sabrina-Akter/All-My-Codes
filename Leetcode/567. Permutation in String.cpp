#include <bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2) {
        bool ans = false;
        if(s1.size()>s2.size())
        {
            return ans;
        }
        unordered_map <char, int> m1, m2;
        string al = "abcdefghijklmnopqrstuvwxyz"; 
        int i, left=-1, right=s1.size()-2, f=0;
        for(i=0;i<s1.size();i++)
        {
            m1[s1[i]]++;
            if(i<s2.size())
            {
                m2[s2[i]]++;
            }
        }
        while(1)
        {
            if(right+1==s2.size())
            {
                break;
            }
            else
            {
                if(left!=-1)
                {
                    m2[s2[left]]--;
                }
                left++;
                right++;
                if(right!=s1.size()-1)
                {
                    m2[s2[right]]++;
                }
                int cnt=0;
                for(i=0;i<al.size();i++)
                {
                    if(m1[al[i]]==m2[al[i]])
                    {
                        cnt++;
                    }
                }
                if(cnt==26)
                {
                    f=1;
                    break;
                }
                cout << endl;
            }
        }
        if(f==1)
        {
            ans = true;
        }
        return ans;
    }

int main()
{
    string s1 = "ab", s2 = "eidboaoo";
    checkInclusion(s1, s2);

    return 0;
}