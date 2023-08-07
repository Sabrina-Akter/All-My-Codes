#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    string s;
    getline(cin, s);
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='\\')
        {
            break;
        }
        else
        {
            cout << s[i];
        }
    }
    return 0;
}
