#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
        int i;
        string a, b;
        for(i=0;i<s.size();i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')  || (s[i]>='0' && s[i]<='9'))
            {
                a+=tolower(s[i]);
            }
        }
        b = a;
        reverse(b.begin(), b.end());
        if(a==b)
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
    string s = "A man, a plan, a canal: Panama";
    isPalindrome(s);
    return 0;
}