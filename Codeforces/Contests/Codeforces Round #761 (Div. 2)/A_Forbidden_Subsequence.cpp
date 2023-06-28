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
    ll T;
    cin >> T;
    while(T--)
    {
        string s, t, x;
        cin >> s >> t;
        x = t;
        sort(all(t));
        char first='a', second='b', third='c';
        if(x=="abc")
        {
            second = 'c';
            third = 'b';
        }
        ll i,a=0,b=0,c=0;
        sort(all(s));
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            {
                a++;
            }
            if(s[i]=='b')
            {
                b++;
            }
            if(s[i]=='c')
            {
                c++;
            }
        }
        if(a==0 || b==0 || c==0)
        {
            cout << s << nl;
        }
        else
        {
            for (i = 0; i < s.size(); i++)
            {
                if (s[i] == first)
                {
                    cout << s[i];
                }
            }
            for (i = 0; i < s.size(); i++)
            {
                if (s[i] == second)
                {
                    cout << s[i];
                }
            }
            for (i = 0; i < s.size(); i++)
            {
                if (s[i] == third)
                {
                    cout << s[i];
                }
            }
            sort(all(s));
            for (i = 0; i < s.size(); i++)
            {
                if (s[i] != first && s[i] != second && s[i] != third)
                {
                    cout << s[i];
                }
            }
            cout << nl;
        }
    }
    return 0;
}