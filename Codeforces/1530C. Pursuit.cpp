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
        ll i, n, k, num, sum1=0, sum2=0, x, y;
        cin >> n;
        if(n==1)
        {
            cin >> x >> y;
            if(x>=y)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            k = n - (n/4), x=0;
            vector <ll> v1, v2;
            for(i=0; i<n; i++)
            {
                cin >> num;
                v1.pb(num);
            }
            for(i=0; i<n; i++)
            {
                cin >> num;
                v2.pb(num);
            }
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
            for(i=n-1; i>=0; i--)
            {
                x++;
                sum1+=v1[i];
                sum2+=v2[i];
                if(x==k)
                {
                    y = i+1;
                    break;
                }
            }
            if(sum1>=sum2)
            {
                cout << 0 << endl;
            }
            else
            {
                x = 0;
                while(1)
                {
                    sum1+=100;
                    sum2+=100;
                    y--;
                    sum1-=v1[y];
                    sum2-=v2[y];
                }
            }
        }
    }
    return 0;
}
