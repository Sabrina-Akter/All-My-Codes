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
    string a, b, N, s1, s2, s3, s4;
    cin >> a >> b;
    ll k, i, cnt=0, zero=0, one=0, two=0, three=0, div, rem, ans;
    vll pos;
    char c;
    cin >> k >> c;
    if(k<=3)
    {
        if(k==1)
        {
            N=a;
        }
        else if(k==2)
        {
            N=a+b;
        }
        else if(k==3)
        {
            N=a+b+b;
        }
        for(i=0;i<N.size();i++)
        {
            if(N[i]==c)
            {
                cnt++;
                pos.pb(i+1);
            }
        }
        if(cnt<2)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << pos[1]-pos[0] << " " << pos[pos.size()-1]-pos[0] << nl;
        }
    }
    else
    {
        N = a+b+b+a;
        for(i=0;i<N.size();i++)
        {
            if(N[i]==c)
            {
                cnt++;
                pos.pb(i+1);
            }
        }
        if(cnt<2)
        {
            cout << -1 << nl;
        }
        else
        {
            s1 = a, s2 = a+b, s3 = a+b+b, s4 = a+b+b+a;
            //A
            for (i = s1.size() - 1; i >= 0; i--)
            {
                if (s1[i] == c)
                {
                    one = i + 1;
                    break;
                }
            }
            //AB
            for (i = s2.size() - 1; i >= 0; i--)
            {
                if (s2[i] == c)
                {
                    two = i + 1;
                    break;
                }
            }
            //ABB
            for (i = s3.size() - 1; i >= 0; i--)
            {
                if (s3[i] == c)
                {
                    three = i + 1;
                    break;
                }
            }
            //ABBA
            for (i = s4.size() - 1; i >= 0; i--)
            {
                if (s4[i] == c)
                {
                    zero = i + 1;
                    break;
                }
            }
            //Ans
            div = (k / 4);
            rem = k % 4;
            ans = div * (s4.size());
            if (rem == 1)
            {
                ans += one;
            }
            else if (rem == 2)
            {
                ans += two;
            }
            else if (rem == 3)
            {
                ans += three;
            }
            cout << pos[1]-pos[0] << " " << ans - pos[0] << nl;
        }
    }
    return 0;
}