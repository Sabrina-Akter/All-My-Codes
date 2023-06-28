#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    set <string> v;
    string s;
    while(getline(cin, s))
    {
        ll i;
        s.pb('.');
        string S="";
        for(i=0;i<s.size();i++)
        {
            char c = tolower(s[i]);
            if(c>='a' && c<='z')
            {
                S+=c;
            }
            else
            {
                if(S.size()>0)
                {
                    v.insert(S);
                }
                S="";
            }
        }
    }
    for(auto &p: v)
    {
        cout << p << endl;
    }
    return 0;
}
