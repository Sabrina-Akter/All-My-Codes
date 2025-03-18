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
    ll n, N, x = 0, temp, i, j;
    bool flag1, flag2 = false, f3 = false, f4 = false;
    cin >> n;
    N = (n * 2) + 1;
    i = n;
    while(1)
    {
        temp = 0;
        flag1 = false;
        vll v(N, -1);
        j = i;
        //cout << "j = " << j << nl;
        while(1)
        {
            //cout << "temp = " << temp << endl;
            v[j] = temp;
            j++;
            if(flag1 == false && temp < x)
            {
                temp++;
                if(temp == x) flag1 = true;
            }             
            else
            {
                temp--;
                if(temp == -1) break;
            }
        }
        //cout << v.size() << nl;
        f4 = false;
        for(int k = 0; k < v.size(); k++)
        {
            if(f4 == false && v[k] == -1) cout << " ";
            else if(v[k] != -1)
            {
                f4 = true;
                cout << v[k];
            }
            if(v[k] == 0)
            {
                if(k + 1 < v.size() && v[k + 1] != -1) cout << " ";
            }
            else if((f4 == false && v[k] == -1) || (f4 == true && v[k] != -1)) cout << " ";
        }
        if(f3 == true) i++;
        else i--;
        if(i == 0)
        {
            f3 = true;
        }
        cout << nl;
        if(flag2 == false && x < n)
        {
            x++;
            if(x == n) flag2 = true;
        }
        else
        {
            x--;
            if(x == -1) break;
        }
    }
    return 0;
}