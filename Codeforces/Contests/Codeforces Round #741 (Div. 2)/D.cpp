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
    string num="0123456789";
    cin >> t;
    while(t--)
    {
        ll i, j, k, n, flag=0, no;
        string s;
        cin >> n;
        cin >> s;
        vll v;
        for(i=0;i<s.size();i++)
        {
            for(j=1;j<num.size();j++)
            {
                if(s[i]==num[j])
                {
                    v.pb(j);
                    if(s[i]=='1')
                    {
                        cout << "1" << nl;
                        cout << "1" << nl;
                        flag=1;
                        break;
                    }
                    if(s[i]=='9')
                    {
                        cout << "1" << nl;
                        cout << "9" << nl;
                        flag=1;
                        break;
                    }
                    else if((j%2==0) && (j>=4))
                    {
                        cout << "1" << nl;
                        cout << j << nl;
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==0)
        {
            for(i=0;i<v.size();i++)
            {
                for(j=i+1;j<v.size();j++)
                {
                    no=(v[i]*10)+v[j];
                    for(k=2;k<=(no/2);k++)
                    {
                        if(no%k==0)
                        {
                            cout << "2" << nl;
                            cout << no << nl;
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1)
                    {
                        break;
                    }
                }
                if(flag==1)
                {
                    break;
                }
            }
        }
    }
    return 0;
}
