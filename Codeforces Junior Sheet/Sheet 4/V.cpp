#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    string s;
    ll i;
    cin >> s;
    s = s+"ABCD";
    for(i=0;i<s.size()-4;i++)
    {
        if(s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T')
        {
            cout << " ";
            i+=4;
        }
        else
        {
            cout << s[i];
        }
    }
    return 0;
}
