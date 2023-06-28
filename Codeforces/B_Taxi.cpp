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
    ll t, three=0, four=0, sum=0, m1;
    double one=0.0, two=0.0, x, m2;
    cin >> t;
    while(t--)
    {
        cin >> x;
        if(x==1)
        {
            one++;
        }
        else if(x==2)
        {
            two+=2;
        }
        else if(x==3)
        {
            three++;
        }
        else
        {
            four++;
        }
    }
    //For Four:
    sum+=four;

    //For Three:
    m1 = min((ll)one, three);
    sum+= m1;
    three-=m1;
    one-=m1;
    sum+=three;

    //Four One and Two:
    m2 = one+two;
    m2 = ceil(m2/4.0);
    sum+=m2;

    //Ans
    cout << sum << nl;
    return 0;
}