#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i;
    string s;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='.')
        {
            break;
        }
        else
        {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}
