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
    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        int one = 0,zero = 0;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a == 1)one++;
            else zero++;
        }
        n /= 2;
        if(one <= n){
            one = 0;
        }
        else if(zero < n){
            zero = 0;
            if(one & 1){
                one--;
            }
        }
        if(one > 0){
            cout<<one<<endl;
        }
        if(zero > 0){
            cout<<zero<<endl;
        }
        for(int i=0; i<one; i++){
            cout<<1<<" ";
        }
        for(int i=0; i<zero; i++){
            cout<<0<<" ";
        }
        cout<<endl;
    }    
    return 0;
}