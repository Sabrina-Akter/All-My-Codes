#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    string s;
    while(cin >> s)
    {
        if(s=="\0")
        {
            break;
        }
        string S="";
        char last = s[s.size()-1];
        ll i, L, R, flag=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==last)
            {
                L=i;
                R=s.size()-1;
                while(1)
                {
                    if(((L==R) && (s[L]==s[R])) || ((R-L==1) && (s[L]==s[R])))
                    {
                        flag=1;
                        break;
                    }
                    else if(s[L]==s[R])
                    {
                        L++;
                        R--;
                    }
                    else
                    {
                        S.pb(s[i]);
                        break;
                    }
                }
            }
            else
            {
                S.pb(s[i]);
            }
            if(flag==1)
            {
                break;
            }
        }
        cout << s;
        if(S.size()!=0)
        {
            reverse(S.begin(), S.end());
            cout << S;
        }
        cout << endl;
    }
    return 0;
}

