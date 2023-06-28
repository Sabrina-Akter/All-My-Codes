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
        ll n, i, Less=0, Great=0;
        string s;
        cin >> n >> s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='<')
            {
                Less++;
            }
            else
            {
                break;
            }
        }
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='>')
            {
                Great++;
            }
            else
            {
                break;
            }
        }
        cout << min(Less, Great) << endl;
    }
    return 0;
}
