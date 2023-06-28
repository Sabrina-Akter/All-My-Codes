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
    ll A[10]={6,2,5,5,4,5,6,3,7,6};
    string st="0123456789";
    ll t;
    cin >> t;
    while(t--)
    {
        ll i, j, n, sum=0, num, sum2, k, z;
        cin >> n;
        string s, a;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                sum+=A[0];
            }
            else if(s[i]=='1')
            {
                sum+=A[1];
            }
            else if(s[i]=='2')
            {
                sum+=A[2];
            }
            else if(s[i]=='3')
            {
                sum+=A[3];
            }
            else if(s[i]=='4')
            {
                sum+=A[4];
            }
            else if(s[i]=='5')
            {
                sum+=A[5];
            }
            else if(s[i]=='6')
            {
                sum+=A[6];
            }
            else if(s[i]=='7')
            {
                sum+=A[7];
            }
            else if(s[i]=='8')
            {
                sum+=A[8];
            }
            else if(s[i]=='9')
            {
                sum+=A[9];
            }
        }
        sum2=sum;
        for(i=n;i>=1;i--)
        {
            k = i-1;
            for(j=9;j>=0;j--)
            {
                num = A[j];
                z = sum2 - num;
                if(i==1)
                {
                    if(z==0)
                    {
                        a.pb(st[j]);
                        break;
                    }
                }
                else 
                {
                    if((z>=(2*k)) && (z<=(7*k)))
                    {
                        a.pb(st[j]);
                        sum2 = sum2-num;
                        break;
                    }
                }
            }
        }
        cout << a << nl;
    }
    return 0;
}