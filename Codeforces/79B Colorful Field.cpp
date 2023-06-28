#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(i,x,y) for(ll i=x;i<=y;i++)
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, m, k, t, i, j, x, y, cell, waste, flag, N;
    cin >> n >> m >> k >> t;
    vll v;
    for(i=0;i<k;i++)
    {
        cin >> x >> y;
        cell = ((x-1)*m)+y;
        v.pb(cell);
    }
    sort(v.begin(), v.end());
    for(i=0;i<t;i++)
    {
        cin >> x >> y;
        cell = ((x-1)*m)+y;
        waste = 0;
        flag=0;
        for(j=0;j<v.size();j++)
        {
            if(v[j]==cell)
            {
                flag = 1;
                cout << "Waste" << endl;
                break;
            }
            else if(v[j]<cell)
            {
                waste++;
            }
            else if(v[j]>cell)
            {
                break;
            }
        }
        if(flag==0)
        {
            N = (cell-waste)%3;
            if(N==0)
                cout << "Grapes" << endl;
            else if(N==1)
                cout << "Carrots" << endl;
            else if(N==2)
                cout << "Kiwis" << endl;
        }
    }
    return 0;
}
