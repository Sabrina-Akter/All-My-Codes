#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t, c=0;
    cin >> t;
    while(t--)
    {
        c++;
        ll n, i, j, flag=0;
        string s;
        map <string, ll> m1, m2;
        vector <string> v;
        cin >> n;
        cout << "Case " << c << ": ";
        for(i=0;i<n;i++)
        {
            cin >> s;
            v.pb(s);
            m1[s]++;
            m2[s]=i;
        }
        for(i=0; i<v.size(); i++)
        {
            string S="";
            for(j=0; j<v[i].size(); j++)
            {
                S.pb(v[i][j]);
                if(m1[S]>=1 && m2[S]!=i)
                {
                    cout << "NO" << endl;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==0)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
