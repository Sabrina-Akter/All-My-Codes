#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define fi first
#define ff first
#define se second
#define ss second
#define ll long long
#define vll vector <ll>
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define pll pair<ll,ll>
#define ms(x) memset(x, 0, sizeof x)
const int N = 1000010;
const long long INF = 1e18+7;
#define mod 1000000007
#define YES cout << "YES\n"
#define NO cout << "NO\n"
typedef unsigned long long ull;
#define all(x) (x).begin(), (x).end()
#define debug(x) cout<<#x<<" = "<<x<<nl;
#define forn(i,n) for(int i=0;i<n;i++)
ull GCD(ull x,ull y){if(y==0) return x;else return GCD(y,x%y);}
ull LCM(ull a,ull b){return (a*b/(GCD(a,b)));}
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
bool compare(const pair<ll,ll> &a,const pair<ll,ll> &b){if(a.fi==b.fi)return a.se>b.se;return a.fi<b.fi;}
vector<ll>allprimes;
bool prime[N];
void sieve(){allprimes.push_back(2);for(ll i=3; i<=N; i+=2){if(!prime[i]){allprimes.push_back(i);for(ll j=i*i; j<=N; j+=i)prime[j]=1;}}}
bool vis[N];
vector<int>graph[N];
void dfs(int vertex){vis[vertex]=true;for(int j:graph[vertex]){if(vis[j]==true)continue;dfs(j);}}
ll binpow(ll a,ll b,ll m){a%=m;ll res=1;while(b>0){if(b&1)res=res*a%m;a=a*a%m;b>>=1;}return res;}

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // L, R, D, U, TR, BR, TL, BL
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  //

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

//main
int main(){
    fast();
    int t=1;
    cin>>t;
    while(t--){
        
    }
}
