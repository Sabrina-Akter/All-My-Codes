#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)

const int MOD = 1000000007;
const char nl = '\n';

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        string a, c, T1, T2;
        ll b, d, s1, s2, i, f=0;
        cin >> a >> b;
        cin >> c >> d;
        s1 = a.size() + b;
        s2 = c.size() + d;
        if(s1>s2)
        {
            cout << ">" << nl;
        }
        else if(s1<s2)
        {
            cout << "<" << nl;
        }
        else if(s1==s2)
        {
            if(a.size()!=c.size())
            {
                ll dif = max(a.size(), c.size()) - min(a.size(), c.size());
                if(a.size()>c.size())
                {
                    for(i=0;i<dif;i++)
                    {
                        c.pb('0');
                    }
                }
                else
                {
                    for(i=0;i<dif;i++)
                    {
                        a.pb('0');
                    }
                }
            }
            for(i=0;i<a.size();i++)
            {
                if(a[i]>c[i])
                {
                    cout << ">" << nl;
                    f=1;
                    break;
                }
                else if(a[i]<c[i])
                {
                    cout << "<" << nl;
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                cout << "=" << nl;
            }
        }
    }
    return 0;
}