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
        ll n, q;
        cin >> n >> q;
        string s1, s2;
        cin >> s1 >> s2;
        vector<vector<int>> v1(s1.size(), vector<int>(26, 0));
        vector<vector<int>> v2(s1.size(), vector<int>(26, 0));
        vector <int> temp1(26);
        for(int i = 0; i < s1.size(); i++)
        {
            temp1[s1[i] - 'a']++;
            for(int j = 0; j < 26; j++) v1[i][j] = temp1[j];
        }
        vector <int> temp2(26);
        for(int i = 0; i < s2.size(); i++)
        {
            temp2[s2[i] - 'a']++;
            for(int j = 0; j < 26; j++) v2[i][j] = temp2[j];
        }
        ll x, y, z;
        for(int i = 0; i < q; i++)
        {
            cin >> x >> y;
            x = min(x, y);
            y = max(x, y);
            for(int j = 0; j < 26; j++)
            {
                z = v2[y - 1][j] - v2[x - 1][j];
                //cout << v2[y - 1][j] << " " << v2[x - 1][j] << " ";
                if(v2[x - 1][j] != 0 && v2[y - 1][j] != v2[x - 1][j]) z++;
                cout << z << " ";
            }
            cout << endl;
        }
    }
    return 0;
}