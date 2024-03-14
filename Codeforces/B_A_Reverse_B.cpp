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


string to_String(long long int num) {
    if (num == 0) return "0"; 

    std::string result = ""; 

    while (num > 0) 
    {
        char digit = '0' + (num % 10); 
        result = digit + result; 
        num /= 10; 
    }

    return result;
}


int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
 
        vll v(n);
 
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            if(i%2==0){
                v[i]*=-1;
            }
        }
        unordered_set<ll> s;
        bool ans = false;
        bool status = false;
        ll ps = 0;
        s.insert(ps);
        for(ll i=0;i<n;i++){
            ps+=v[i];
            if(s.count(ps)>0){
                cout<<"YES\n";
                status = true;
                break;
            }else{
                s.insert(ps);
            }
        }
        if(!status){
            cout<<"NO\n";
        }
    }
    return 0;
}