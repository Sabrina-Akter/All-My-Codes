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

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    ll A, B, a, b, x, c;
    while(1)
    {
        x=0, c=0;
        cin >> A >> B;
        a = A, b = B;
        if(a==0 && b==0)
        {
            break;
        }
        else if(a==b || max(a,b)/min(a,b)==0)
        {
            cout << "Stan wins" << nl;
        }
        else
        {
            while(1)
            {
                x++;
            if(c==0 && max(a,b)/min(a,b)>1)
            {
                if(x%2!=0)
                {
                    c = 1;
                }
                else
                {
                    c = 2;
                }
            }
            if(a==0 || b==0)
            {
                if(c==0)
                {
                    if(x%2!=0)
                    {
                        cout << "Stan wins" << nl;
                    }
                    else
                    {
                        cout << "Ollie wins" << nl;
                    }
                }
                else
                {
                    if(c==1)
                    {
                        cout << "Stan wins" << nl;
                    }
                    else
                    {
                        cout << "Ollie wins" << nl;
                    }
                }
                break;
            }
            else if(a<=b)
            {
                b = b-((b/a)*a);
            }
            else
            {
                a = a-((a/b)*b);
            }
            }
        }
    }
    return 0;
}