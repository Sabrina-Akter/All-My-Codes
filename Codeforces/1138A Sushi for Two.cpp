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
    ll n, i, last, sum=1;
    cin >> n;
    n=n+1;
    ll A[n];
    vll v, V;
    for(i=0;i<n-1;i++)
    {
        cin >> A[i];
    }
    A[n-1] = 3;
    last = 3;
    for(i=0;i<n;i++)
    {
        //cout << "i = " << i << endl;
        if(last==A[i])
        {
            sum++;
        }
        else if(last!=A[i])
        {
            //cout << "Sum: " << sum << endl;
            v.pb(sum);
            sum=1;
        }
        last = A[i];
    }
    for(i=0;i<v.size()-1;i++)
    {
        V.pb(min(v[i],v[i+1]));
    }
    cout << ((*max_element(V.begin(), V.end()))*2);
    return 0;
}
