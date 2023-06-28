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
        ll i, one=0, zero=0, ans1, ans2, MIN1, MIN2=1111;
        string s;
        cin >> s;
        ll One[s.size()+5]={0}, Zero[s.size()+5]={0};
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else if(s[i]=='1')
            {
                one++;
            }
            One[i]=one;
            Zero[i]=zero;
        }
        if(one==0 || zero==0)
        {
            cout << 0 << endl;
        }
        else
        {
            for(i=0; i<s.size(); i++)
            {
                ans1 = Zero[i]+one-One[i];
                ans2 = One[i]+zero-Zero[i];
                MIN1 = min(ans1, ans2);
                MIN2 = min(MIN1, MIN2);
            }
            cout << MIN2 << endl;
        }
    }
    return 0;
}
