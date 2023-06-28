#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll i, n, f, k, l, dif, sum=0, c=0;
    cin >> n >> f;
    ll A[n], B[n];
    vector <pair<int, int> > v;
    for(i=0;i<n;i++)
    {
        cin >> k >> l;
        A[i] = min(k, l);
        B[i] = min((2*k), l);
        dif = B[i]-A[i];
        v.push_back(make_pair(dif, i));
    }
    sort(v.begin(), v.end());
    for(i=n-1;i>=0;i--)
    {
        c++;
        if(c<=f)
        {
            sum = sum + B[v[i].second];
        }
        else if(c>f)
        {
            sum = sum + A[v[i].second];
        }
    }
    cout << sum << endl;
    return 0;
}
