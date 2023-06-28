#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
      int i;
      bool f=true;
      if(s.size()!=t.size()) 
      {
        return false;
      }
      else
      {
        map <char, char> m;
        map <char, int> m2, m3;

        for(i=0;i<s.size();i++)
        {
            if(m2[s[i]]==0)
            {
                if(m3[t[i]]==0)
                {
                    m[s[i]] = t[i];
                }
                else
                {
                    f = false;
                }
                m2[s[i]] = 1;
                m3[t[i]] = 1;
            }
            else
            {
                if(m[s[i]]!=t[i])
                {
                    f=false;
                }
            }
        }
      } 
      cout << f << endl;
      return f;
    }

int main()
{
    string s = "badc", t = "baba";
    isIsomorphic(s, t);

    return 0;
}