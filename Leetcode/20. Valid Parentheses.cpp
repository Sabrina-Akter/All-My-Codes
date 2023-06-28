#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
      deque <char> d;
      int i, f=0;
      for(i=0;i<s.size();i++)
      {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
        {
            d.push_back(s[i]);
        }
        else
        {
            if(d.size()>0)
            {
                if((s[i]==')' && d.back()!='(') || (s[i]==']' && d.back()!='[') || (s[i]=='}' && d.back()!='{'))
                {
                    f=1;
                }
                else
                {
                    d.pop_back();
                }
            }
            else
            {
                f=1;
            }
        }
      }
      if(f==0 && d.size()==0)
      {
        return true;
      }
      else 
      {
        return false;
      }
    }

int main()
{
    string s = "()[]{}";
    isValid(s);

    return 0;
}