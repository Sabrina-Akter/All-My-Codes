#include <bits/stdc++.h>
using namespace std;

#define fastt                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)
#define pll pair<ll, ll>
#define plll pair<pll, ll>

const int MOD = 1000000007;
const char nl = '\n';

int X[] = {+0, +0, +1, -1, -1, +1, -1, +1}; // L, R, D, U, TR, BR, TL, BL
int Y[] = {-1, +1, +0, +0, +1, +1, -1, -1}; //

int KX[] = {-2, -2, -1, -1, 1, 1, 2, 2}; // Knight's Move
int KY[] = {-1, 1, -2, 2, -2, 2, -1, 1}; // Knight's Move

int main()
{
    fastt;
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll i, n = s.size(), sum=0;
        char x;
        map <char, ll> m;
        for(i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        for(auto it=m.begin(); it!=m.end(); it++)
        {
            if(it->second==1)
            {
                m[it->first] = 2;
                sum+=2;
            }
            else
            {
                m[it->first] = 1;
                sum+=1;
                x = it->first;
            }
        }
        if(sum>n || m.size()==1)
        {
            cout << -1 << nl;
        }
        else
        {
            if(n!=sum)
            {
                ll need = n-sum+1;
                m[x] = need;
            } 
            for(auto it=m.begin(); it!=m.end(); it++)
            {
                for(i=0;i<it->second; i++)
                {
                    cout << it->first;
                }
            }
            cout << nl;     
        }
        
    }
    return 0;
}