#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    vector <long long> v;
    v.push_back(((k*l)/nl)/n);
    v.push_back((c*d)/n);
    v.push_back((p/np)/n);
    sort(v.begin(), v.end());
    cout << v[0] << endl;
    return 0;
}
