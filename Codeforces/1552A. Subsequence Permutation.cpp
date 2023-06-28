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
        ll n, sum=0, i;
        cin >> n;
        string s, S;
        cin >> s;
        S=s;
        sort(S.begin(),S.end());
        for(i=0;i<s.size();i++)
        {
            if(s[i]!=S[i])
            {
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
