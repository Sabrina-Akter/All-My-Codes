#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, N, sum=0, ans=0;
    cin >> n;
    string s;
    cin >> s;
    unordered_map <ll, ll> m;
    for(i=0;i<s.size();i++)
    {
        N = s[i]-48;
        sum+=N;
        if(sum==n)
        {
            ans++;
        }
        if(m.find(sum-n)!=m.end())
        {
            ans+=m[sum-n];
        }
        m[sum]++;
    }
    cout << ans << endl;
    return 0;
}
