#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t, i, flag=0;
    string s;
    cin >> t >> s;
    if(s[0]!=s[s.size()-1])
    {
        flag = 1;
        cout << 1 << endl;
    }
    else
    {
        for(i=s.size()-1;i>=1;i--)
        {
            if((s[i]!=s[0])&&(s[i-1]!=s[0]))
            {
                cout << 2 << endl;
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
