#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll b, g, i, j, x, p=0;
    vll v1, v2;
    cin >> b;
    for(i=0;i<b;i++)
    {
        cin >> x;
        v1.pb(x);
    }
    cin >> g;
    ll G[g]={0};
    for(i=0;i<g;i++)
    {
        cin >> x;
        v2.pb(x);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for(i=0;i<v1.size();i++)
    {
        for(j=0;j<v2.size();j++)
        {
            if((v1[i]==v2[j] || (v1[i]+1)==v2[j] || (v1[i]-1)==v2[j]) && G[j]==0)
            {
                p++;
                G[j]=1;
                break;
            }
            else if((v2[j]>v1[i]) && (v2[j]-v1[i]>=2))
            {
                break;
            }
        }
    }
    cout << p << endl;
    return 0;
}
