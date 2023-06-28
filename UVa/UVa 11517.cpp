#include <bits/stdc++.h>

#define pii pair <int,int>
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(a) push_back(a)
#define MP make_pair
#define oo 1<<29
#define dd double
#define ll long long
#define EPS 10E-10
#define ff first
#define ss second
#define MAX 10000
#define CIN ios_base::sync_with_stdio(0); cin.tie(0)
#define SZ(a) (int)a.size()
#define si(a) scanf("%d",&a)
#define sii(a,b) scanf("%d%d",&a,&b)
#define siii(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define loop(i,n) for(int i=0;i<n;i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define TEST_CASE(t) for(int z=1;z<=t;z++)
#define PRINT_CASE printf("Case %d: ",z)
#define all(a) a.begin(),a.end()
#define intlim 2147483648
#define inf 1000000
#define rtintlim 46340
#define llim 9223372036854775808
#define rtllim 3037000499
#define ull unsigned long long
#define I int


using namespace std;

int coins_needed[20100];

int coin[110];

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int money;
        cin>>money;
        int n, i, j;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>coin[i];
        }
        fill(coins_needed, coins_needed+20100, inf);
        coins_needed[0]=0;
        for(int i=0; i<n; i++)
        {
            for(int j=money; j>-1; j--)
            {
                coins_needed[j+coin[i]]=min(coins_needed[j]+1,coins_needed[j+coin[i]]);
            }
        }

        for(int i=money; i<=30100; i++)
        {
            if(coins_needed[i]<10000)
            {
                pf("%d %d\n",i,coins_needed[i]);
                break;
            }
        }
    }
    return 0;
}
