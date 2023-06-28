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
    ll t, cs=0;
    cin >> t;
    while(t--)
    {
        double n, q, r, g, b, i;
        double f,  A, total, T=0, num, v;
        cs++;
        cout << "Case " << cs << ": ";
        
        string s;
        cin >> n >> s >> q;
        f = 1/n;
        if(s=="red")
        {
            A=1;
        }
        else if(s=="green")
        {
            A=2;
        }
        else if(s=="blue")
        {
            A=3;
        }
        for(i=1;i<=n;i++)
        {
            cin >> r >> g >> b;
            total = r+g+b;
            if(i==q)
            {
                if(A==1)
                {
                    num=f*(r/total);
                }
                else if(A==2)
                {
                    num=f*(g/total);
                }
                else if(A==3)
                {
                    num=f*(b/total);
                }
            }
            if(A==1)
            {
                v=r;
            }
            else if(A==2)
            {
                v=g;
            }
            else if(A==3)
            {
                v=b;
            }
            T+=((f)*(v/total));
        }
        cout << fixed << setprecision(5) << num/T << nl;
    }
    return 0;
}