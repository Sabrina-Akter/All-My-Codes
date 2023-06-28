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
#define pll pair<ll,ll>
#define plll pair<pll,ll>

const int MOD = 1000000007;
const char nl = '\n';

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // L, R, D, U, TR, BR, TL, BL
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  //

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    ll t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string a, b, x;
        getline(cin, a);
        getline(cin, b);
        ll i, j, k;
        for(i=0;i<a.size();i++)
        {
            a[i] = tolower(a[i]);
        }
        for(i=2;i<b.size()-2;i++)
        {
            x+=tolower(b[i]);
        }
        string test;
        ll done=0;
        for(i=0;i<a.size();i++)
        {
            for(j=i;j<a.size();j++)
            {
                test+=a[j];
                if(test.size()==x.size())
                {
                    if(test==x)
                    {
                        if(i!=0 && a[i-1]!=' ' && a[j+1]!=' ' && j!=a.size()-1)
                        {
                            done = 1;
                        }
                    }
                    break;
                }
            }
            test = "";
            if(done==1)
            {
                break;
            }
        }
        if(done==1)
        {
            cout << "yes" << nl;
        }
        else
        {
            cout << "no" << nl;
        }
    }
    return 0;
}