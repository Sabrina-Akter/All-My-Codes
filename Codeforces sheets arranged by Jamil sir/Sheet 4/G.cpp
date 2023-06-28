#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    string s;
    cin >> s;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]==',')
        {
            cout << " ";
        }
        else if(isupper(s[i]))
        {
            s[i] = tolower(s[i]);
            cout << s[i];
        }
        else if(islower(s[i]))
        {
            s[i] = toupper(s[i]);
            cout << s[i];
        }
    }
    return 0;
}
