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
    while(t--)
    {
        ll a, b, i;
        cin >> a >> b;
        if(b>a)
        {
            cout << "NO" << nl;
        }
        else if(b==a)
        {
            cout << "YES" << nl;
            for(i=0;i<b;i++)
            {
                cout << 1 << " ";
            }
            cout << nl;
        }
        else
        {
            if(b%2==0)//EVEN
            {
                if(a%2==0)//even
                {
                    if((a-((b-1)*2))>0 && (a-((b-1)*2))%2==0)
                    {
                        cout << "YES" << nl;
                        for(i=0;i<b-1;i++)
                        {
                            cout << 2 << " ";
                        }
                        cout << a-((b-1)*2) << nl;
                    }
                    else if((a-(b-1))%2!=0)
                    {
                        cout << "YES" << nl;
                        for(i=0;i<b-1;i++)
                        {
                            cout << 1 << " ";
                        }
                        cout << a-b+1 << nl;
                    }
                    else
                    {
                        cout << "NO" << nl;
                    }
                }
                else//odd
                {
                    cout << "NO" << nl;
                }
            }
            else//ODD
            {
               if(a%2==0)//even
               {
                    if((a-((b-1)*2))>0 && (a-((b-1)*2))%2==0)
                    {
                        cout << "YES" << nl;
                        for(i=0;i<b-1;i++)
                        {
                            cout << 2 << " ";
                        }
                        cout << a-((b-1)*2) << nl;
                    }
                    else
                    {
                        cout << "NO" << nl;
                    }     
               }
               else//odd
               {
                    cout << "YES" << nl;
                    for(i=0;i<b-1;i++)
                    {
                        cout << 1 << " ";
                    }
                    cout << a-b+1 << nl;
               }
            }
        }
    }
    return 0;
}