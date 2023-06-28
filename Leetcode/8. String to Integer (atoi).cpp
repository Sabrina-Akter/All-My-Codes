#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s) {
        string ans;
        int i, n, neg=0;
        for(i=0;i<s.size();i++)
        {
            if((s[i]=='-') && (i+1<s.size()) && s[i+1]>='0' && s[i+1]<='9')
            {
                ans+=s[i];
                neg=1;
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                ans+=s[i];
            }
        }
        if(ans.size()==0)
        {
            ans = "0";
        }
        try {
            n = stoi(ans);
        } catch (const out_of_range& e) {
            if(neg==1)
            {
                n = -2147483648;
            }
            else
            {
                n = 2147483647;
            }
        }
        cout << n << endl;
        return n;
    }

int main()
{
    string s = "fghjbn";
    cout << stoi(s) << endl;
    myAtoi(s);
    return 0;
}