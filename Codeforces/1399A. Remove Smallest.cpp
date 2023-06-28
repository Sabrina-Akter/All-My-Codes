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
        ll n, x, i, dif, flag=0;
        cin >> n;
        vll v;
        for(i=0;i<n;i++)
        {
            cin >> x;
            v.pb(x);
        }
        if(v.size()==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            sort(v.begin(),v.end());
            for(i=1; i<v.size(); i++)
            {
                dif=abs(v[i]-v[i-1]);
                if(dif>1)
                {
                    cout << "NO" << endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
