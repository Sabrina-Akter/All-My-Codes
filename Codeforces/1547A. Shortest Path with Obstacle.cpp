#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t, x1, y1, x2, y2, x3, y3, mx, mn, ans;
    cin >> t;
    while(t--)
    {
        ans = 0;
        cout << endl;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if(x1==x2)
        {
            if(x3==x1)
            {
                mx = max(y1, y2);
                mn = min(y1, y2);
                if(y3>mn && y3<mx)
                {
                    ans+=2;
                }
            }
            ans+=abs(y1-y2);
        }
        else if(y1==y2)
        {
            if(y3==y1)
            {
                mx = max(x1, x2);
                mn = min(x1, x2);
                if(x3>mn && x3<mx)
                {
                    ans+=2;
                }
            }
            ans+=abs(x1-x2);
        }
        else
        {
            ans+=abs(x1-x2)+abs(y1-y2);
        }
        cout << ans << endl;
    }
    return 0;
}
