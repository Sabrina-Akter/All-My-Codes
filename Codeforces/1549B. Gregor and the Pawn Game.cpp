#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, ans=0;
        map <ll, ll> m;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        for(i=0;i<n;i++)
        {
            if(s2[i]=='1')
            {
                if(s1[i]=='0' && m[i]!=1)
                {
                    ans++;
                    m[i]=1;
                }
                else if(s1[i-1]=='1' && m[i-1]!=1 && (i-1)>=0)
                {
                    ans++;
                    m[i-1]=1;
                }
                else if(s1[i+1]=='1' && m[i+1]!=1 && (i+1)<n)
                {
                    ans++;
                    m[i+1]=1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
