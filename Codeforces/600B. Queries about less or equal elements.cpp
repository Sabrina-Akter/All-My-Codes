#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll a, b, i, j=0, flag=0;
    cin >> a >> b;
    map <ll, ll> m;
    vll v1(a), v2(b), v3(b);
    for(i=0;i<a;i++)
    {
        cin >> v1[i];
    }
    for(i=0;i<b;i++)
    {
        cin >> v2[i];
        v3[i]=v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    for(i=0;i<v2.size();i++)
    {
        flag=0;
        for(;j<v1.size();j++)
        {
            if(v1[j]>v2[i])
            {
                m[v2[i]]=j-1;
                break;
            }
            else
            {
                m[v2[i]]=j;
            }
            flag=1;
        }
        if(flag==0)
        {
            m[v2[i]]=j-1;
        }
    }
    for(i=0;i<v3.size();i++)
    {
        cout << m[v3[i]]+1 << " ";
    }
    cout << endl;
    return 0;
}
