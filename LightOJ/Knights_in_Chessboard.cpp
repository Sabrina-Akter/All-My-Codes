#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

const char nl = '\n';

int main()
{
    fastt;
    ll t, cs=0;
    cin >> t;
    while(t--)
    {
        cs++;
        cout << "Case " << cs << ": ";
        ll a, b, x, y, sum=0, i;
        cin >> a >> b;
        x = a/2, y = x;
        if(a%2!=0)
        {
            x++;
        }
        for(i=0;i<b;i++)
        {
            if(i%2==0)
            {
                sum+=x;
            }
            else
            {
                sum+=y;
            }
        }
        if(a==1 || b==1)
        {
            cout << max(a,b) << nl;
        }
        else if((a==2 || b==2))
        {
            x = max(a, b)*2;
            y = x/8;
            if(x%8!=0)
            {
                y++;
            }
            y=y*4;
            if(x%8==2)
            {
                y-=2;
            }
            cout << y << nl;
        }
        else
        {
            cout << sum << nl;
        }
    }
    return 0;
}