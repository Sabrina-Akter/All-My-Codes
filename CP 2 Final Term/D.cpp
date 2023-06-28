#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i, j;
    ll t, a, b, c;
    cin >> t;
    while(t--)
    {
        ll Sum=0, x=0;
        cin >> a >> b >> c;
        x=0;
        for(i=a;i<=b;i++)
        {
            if(i%c==0)
            {
                for(j=1;j<=sqrt(i);j++)
                {
                    if(i%j==0)
                    {
                        if(j==(i/j))
                        {
                            x+=1;
                            Sum+=j;
                        }
                        else if(i%j==0)
                        {
                            x+=2;
                            Sum+=(j)+(i/j);
                        }
                    }
                }
            }
        }
        cout << x << " " << Sum << endl;
    }
    return 0;
}
