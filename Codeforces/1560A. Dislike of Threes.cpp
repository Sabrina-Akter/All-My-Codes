#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i, k=0;
    vll v;
    for(i=1;i<10000;i++)
    {
        if((i%3!=0) && (i%10!=3))
        {
            k++;
            v.pb(i);
            if(k==1010)
            {
                break;
            }
        }
    }
    ll t;
    cin >> t;
    while(t--)
    {
        cin >> k;
        cout << v[k-1] << endl;
    }
    return 0;
}
