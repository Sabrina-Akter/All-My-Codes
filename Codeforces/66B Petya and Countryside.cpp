#include <bits/stdc++.h>
using namespace std;
#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(i,x,y) for(ll i=x;i<=y;i++)
#define vl vector <ll>
#define pb push_back

int main()
{
    ll n, i, j, sum, last;
    cin >> n;
    ll A[n];
    vector <ll> v;
    for(i=0;i<n;i++)
    {
        cin >> A[i];
    }
    for(i=0;i<n;i++)
    {
        sum = 0;
        last = A[i];
        for(j=i-1;j>=0;j--)
        {
            if(last>=A[j])
            {
                sum++;
                last = A[j];
            }
            else
            {
                break;
            }
        }
        last = A[i];
        for(j=i+1;j<n;j++)
        {
            if(last>=A[j])
            {
                sum++;
                last = A[j];
            }
            else
            {
                break;
            }
        }
        v.push_back(sum+1);
    }
    cout << *max_element(v.begin(), v.end()) << endl;
    return 0;
}
