#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    string s = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    cin >> st;
    int i,j, k, x = 26, y = 26, sum = 0;
    for(i=0;i<st.size();i++)
    {
        int s1 = 0, s2 = 0;
        if(i==0 && st[0] == 'a')
        {
            continue;
        }
        for(j=x;j<s.size();j++)
        {
            if(s[j]==st[i])
            {
                if(j==s.size()-1)
            {
                j = 25;
            }
                break;
            }
            if(j==s.size()-1)
            {
                s1++;
                j = 25;
            }
            else
            {
                s1++;
            }
        }
        for(k=y;k>=0;k--)
        {
            if(s[k]==st[i])
            {
                if(k==0)
            {
                k = 26;
            }
                break;
            }
            if(k==0)
            {
                s2++;
                k = 26;
            }
            else
            {
                s2++;
            }
        }
        if(s1<=s2)
        {
            sum = sum + s1;
            x = j;
            y = j;
        }
        else if(s2<=s1)
        {
            sum = sum + s2;
            x = k;
            y = k;
        }
    }
    cout << sum << endl;
    return 0;
}
