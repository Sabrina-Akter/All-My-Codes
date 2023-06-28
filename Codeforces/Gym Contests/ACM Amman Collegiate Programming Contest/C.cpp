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
        ll A[110] = {0};
        vector <double> v;
        ll n, i, flag=0, ans=0, num=0, m;
        double M;
        cin >> n;
        string s;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='*')
            {
                if((i-1)>=0)
                {
                    A[i-1]=1;
                }
                if((i+1)<=(s.size()-1))
                {
                    A[i+1]=1;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if((s[i]=='.') && (A[i]==0))
            {
                num++;
                flag=1;
            }
            else if(flag==1)
            {
                v.pb(num);
                num = 0;
                flag = 0;
            }
        }
        v.pb(num);
        for(i=0;i<v.size();i++)
        {
            m = v[i]/3;
            M = v[i]/3;
            if(m!=M)
            {
                m++;
            }
            ans+=m;
        }
        cout << ans << nl;
    }
    return 0;
}