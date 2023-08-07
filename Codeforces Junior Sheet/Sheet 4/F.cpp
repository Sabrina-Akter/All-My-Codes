#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s.size()<=10)
        {
            cout << s << endl;
        }
        else
        {
            cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
        }
    }
    return 0;
}
