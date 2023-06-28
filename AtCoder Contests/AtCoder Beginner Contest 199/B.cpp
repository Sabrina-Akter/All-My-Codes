#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000
vll v1, v2;

int main()
{
    fastt;
    ll n, i, j, x, a, b, flag=0;
    cin >> n;
    for(i=0;i<2;i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> x;
            if(i==0)
            {
                v1.pb(x);
            }
            else if(i==1)
            {
                v2.pb(x);
            }
        }
    }
    a = *max_element(v1.begin(), v1.end());
    b = *min_element(v2.begin(), v2.end());
    for(i=0;i<n;i++)
    {
        if(a<v1[i] || b>v2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1 || (b-a)<0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << b-a+1 << endl;
    }
    return 0;
}
