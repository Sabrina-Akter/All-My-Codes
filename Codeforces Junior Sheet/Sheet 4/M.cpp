#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    string s, S="hello";
    ll l = 0, flag=0;
    cin >> s;
    for(ll i=0;i<s.size();i++)
    {
        if(l==5)
        {
            flag = 1;
            break;
        }
        else if(s[i]==S[l])
        {
            l++;
        }
    }
    if(flag==1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
