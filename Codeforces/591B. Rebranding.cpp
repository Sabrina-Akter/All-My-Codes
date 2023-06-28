#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    ll n, m, i, j, x;
    cin >> n >> m;
    string s, S="abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    char c1, c2;
    for(i=0;i<m;i++)
    {
        cin >> c1 >> c2;
        for(j=0;j<S.size();j++)
        {
            if(S[j]==c1)
            {
                S[j] = c2;
            }
            else if(S[j]==c2)
            {
                S[j] = c1;
            }
        }
    }
    for(i=0;i<s.size();i++)
    {
        x = s[i]-97;
        cout << S[x];
    }
    cout << endl;
    return 0;
}
