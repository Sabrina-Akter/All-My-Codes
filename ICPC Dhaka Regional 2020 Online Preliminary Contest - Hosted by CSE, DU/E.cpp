#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

int main()
{
    fastt;
    ll t, n, i, x;
    cin >> t;
    while(t--)
    {
        ll pos=0, moves=0, sum=0, zero=0, group=0, flag=0;
        vll v, v2;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            if(x<0 && flag==1)
            {
                group++;
                flag=0;
            }
            else if(x>0)
            {
                pos++;
                sum = sum+x;
                flag=1;
            }
            else if(x==0)
            {
                zero++;
            }
            v.pb(x);
            v2.pb(x);
        }
        if(pos==0)
        {
            cout << *max_element(v2.begin(),v2.end()) << " " << 0 << endl;
        }
        else if(pos==(n-zero))
        {
            cout << sum << " " << 0 << endl;
        }
        else
        {
            cout << "Group = " << group << endl;
        }
    }
    return 0;
}
