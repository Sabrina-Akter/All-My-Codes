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
        ll i, i_one, i_two, i_three, flag1, flag2, mn = LONG_LONG_MAX;
        string s;
        cin >> s;
        vll one, two, three;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                one.pb(i);
            }
            else if(s[i]=='2')
            {
                two.pb(i);
            }
            else if(s[i]=='3')
            {
                three.pb(i);
            }
        }
        //For 1
        for(i=0;i<one.size();i++)
        {
            flag1=0, flag2=0;
            i_one = one[i];
            auto it1 = lb(all(two), i_one);
            if(it1!=two.end())
            {
                i_two = (*it1);
                flag1=1;
            }
            auto it2 = lb(all(three), i_one);
            if(it2!=three.end())
            {
                i_three = (*it2);
                flag2=1;
            }
            if(flag1==1 && flag2==1)
            {
                vll v = {i_one, i_two, i_three};
                //cout << i_one << " " << i_two << " " << i_three << nl;
                sort(all(v));
                mn = min(mn, ((v[2]-v[0])+1));
            }
        }
        //For 2
        for(i=0;i<two.size();i++)
        {
            flag1=0, flag2=0;
            i_two = two[i];
            auto it1 = lb(all(one), i_two);
            if(it1!=one.end())
            {
                i_one = (*it1);
                flag1=1;
            }
            auto it2 = lb(all(three), i_two);
            if(it2!=three.end())
            {
                i_three = (*it2);
                flag2=1;
            }
            if(flag1==1 && flag2==1)
            {
                vll v = {i_one, i_two, i_three};
                //cout << i_one << " " << i_two << " " << i_three << nl;
                sort(all(v));
                mn = min(mn, ((v[2]-v[0])+1));
            }
        }
        //For 3
        for(i=0;i<three.size();i++)
        {
            flag1=0, flag2=0;
            i_three = three[i];
            auto it1 = lb(all(two), i_three);
            if(it1!=two.end())
            {
                i_two = (*it1);
                flag1=1;
            }
            auto it2 = lb(all(one), i_three);
            if(it2!=one.end())
            {
                i_one = (*it2);
                flag2=1;
            }
            if(flag1==1 && flag2==1)
            {
                vll v = {i_one, i_two, i_three};
                //cout << i_one << " " << i_two << " " << i_three << nl;
                sort(all(v));
                mn = min(mn, ((v[2]-v[0])+1));
            }
        }
        if(mn==LONG_LONG_MAX)
        {
            mn = 0;
        }
        cout << mn << nl;
    }
    return 0;
}