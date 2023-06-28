#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll l, sum=1, i;
    string s;
    vll v;
    v.pb(0);
    cin >> l >> s;
    for(i=1;i<l;i++)
    {
        if(s[i]!=s[i-1])
        {
            sum++;
            v.pb(sum);
        }
    }
    if(l==1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << *max_element(v.begin(), v.end()) << endl;
    }
    return 0;
}
