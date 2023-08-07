#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    long long n, i, x, c;
    vector <long long> v;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    c = count(v.begin(), v.end(), *min_element(v.begin(),v.end()));
    if(c%2==0)
    {
        cout << "Unlucky" << endl;
    }
    else
    {
        cout << "Lucky" << endl;
    }
    return 0;
}
