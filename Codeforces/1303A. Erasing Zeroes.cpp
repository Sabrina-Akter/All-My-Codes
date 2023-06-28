#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll i, zero=0, store=0, flag=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1' && flag==0)
            {
                flag=1;
            }
            if(flag==1)
            {
                if(s[i]=='0')
                {
                    zero++;
                }
                if(s[i]=='1')
                {
                    store = zero;
                }
            }
        }
        cout << store << endl;
    }
    return 0;
}
