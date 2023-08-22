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
    cin>>t;
    while(t--)
    {
        ll n,x,y;
        cin>>n;
        vector<pll> a;
        
        while(n--)
        {
            cin>>x>>y;
            a.push_back({x,y});
        }
        
        sort(all(a));
        string s;
        ll m=0,f=0;
        bool check=true;
        for(auto i: a)
        {
            if(i.ff<m || i.ss<f)
            {
                check=false;
                break;
            }
            for(int j=1;j<=(i.ff-m);j++)
                s+='R';
            for(int j=1;j<=(i.ss-f);j++)
                s+='U';
            m=i.ff,f=i.ss;
        }
        if(check)
        {
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else
            cout<<"NO"<<endl;
    }    
    return 0;
}