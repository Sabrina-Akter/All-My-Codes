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

bool prime[100005];

void sieve()
{
    memset(prime,1,sizeof(prime));

    prime[0]=prime[1]=0;
    for(int i=4; i<=100005; i+=2)
        prime[i]=0;

    for(int i=3; i<=100005; i+=2)
    {
        if(prime[i])
        {
            for(int j=i*2; j<=100005; j+=i)
            {
                prime[j]=0;
            }
        }
    }
}

using namespace std;

int main()
{
    fastt;
    ll i,j,k;
    ll n;

    cin>>n;

    sieve();

    ll pr=0,npr=0;
    for(i=2; i<=n+1; i++)
    {
        if(prime[i])
            pr++;
        else
            npr++;
    }

    if(npr==0)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"2"<<endl;
    }
    for(i=2; i<=n+1; i++)
    {
        if(prime[i])
        {
            cout<<"1 ";
        }
        else
        {
            cout<<"2 ";
        }
    }
    return 0;
}