#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 100000


int main()
{
    fastt;
    ll n, i, x, j, sum=0, c;
    vll v;
    cin >> n;
    v.pb(0);
    for(i=0;i<n;i++)
    {
        cin >> x;
        c = count(v.begin(),v.end(),x);
        if(c==0)
        {
            v.pb(x);
        }
    }
    sort(v.begin(), v.end());
    for(i=v.size()-1;i>0;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            cout << "i = " << i << " and j = " << j << endl;
            if(j==0)
            {
                if(i==1)
                {
                    sum = sum +(v[i]+1);
                }
            }
            else
            {
                sum = sum + (v[i]-v[j]+1);
            }
        }
    }
    cout << sum << endl;
    return 0;
}
