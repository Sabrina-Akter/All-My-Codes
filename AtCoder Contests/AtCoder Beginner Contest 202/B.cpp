#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 100000

int main()
{
    fastt;
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='6')
        {
            cout << '9';
        }
        else if(s[i]=='9')
        {
            cout << '6';
        }
        else
        {
            cout << s[i];
        }
    }
    return 0;
}
