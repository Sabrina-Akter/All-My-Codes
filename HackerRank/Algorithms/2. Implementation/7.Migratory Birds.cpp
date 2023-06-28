#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

set <ll> s;
set <ll>::iterator it;

int main()
{
    fastt;
    ll n, i, Max=0, x;
    cin >> n;
    ll A[n+1]={0};
    for(i=0;i<n;i++)
    {
        cin >> x;
        s.insert(x);
        A[x]++;
        if(A[x]>Max)
        {
            Max = A[x];
        }
    }
    for(it=s.begin();it!=s.end();it++)
    {
        if(A[*it]==Max)
        {
            cout << *it << endl;
            break;
        }
    }
    return 0;
}
