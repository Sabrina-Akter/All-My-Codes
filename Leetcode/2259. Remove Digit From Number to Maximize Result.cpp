#include <bits/stdc++.h>
using namespace std;

string removeDigit(string number, char digit) {
       int i, size = number.size(), f=0, last;
       string s = number, ans;
       s+=':';
       for(i=0;i<size;i++)
       {
            if(s[i]==digit)
            {
                last = i;
            }
            if(s[i]==digit && f==0 && s[i]<s[i+1])
            {
                f=1;
            }
            else
            {
                ans+=number[i];
            }
       }
       if(ans.size()==size)
       {
            int toBeRemoved = last; 
            memmove(&ans[toBeRemoved],&ans[toBeRemoved+1],size-toBeRemoved);
       }
       cout << ans.size();
       return ans;
    }

int main()
{
    string number;
    char digit;
    cin >> number >> digit;
    removeDigit(number, digit);
    return 0;
}