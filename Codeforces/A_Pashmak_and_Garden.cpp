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
    ll i, x;
    vll v(4);
    for(i=0;i<4;i++)
    {
        cin >> v[i];
        if(v[i]!=0)
        {
            x = v[i];
        }
    }
    vector <pair<ll, ll> > v1, p1, p2, p3;
    v1 = {{v[0], v[1]}, {v[2], v[3]}};
    p1 = {{0,0}, {0,x}, {x,0}, {x,x}};
    p2 = {{0,0}, {0,x}, {-x,0}, {-x,x}};
    p3 = {{0,0}, {0,-x}, {x,0}, {x,-x}};
    ll cnt1=0, cnt2=0;
    unordered_map <ll, ll> m1, m2, m3;
    for(i=0;i<p1.size();i++)
    {
        if(v1[0].first==p1[i].first && v1[0].second==p1[i].second)
        {
            cnt1++;
            m1[i] = 1;
        }
    }
    if(cnt1==1)
    {
        for(i=0;i<p1.size();i++)
        {
            if(v1[1].first==p1[i].first && v1[1].second==p1[i].second)
            {
                cnt2++;
                m1[i] = 1;
            }
        }
        if(cnt1==1 && cnt2==1)
        {
            for(i=0;i<p1.size();i++)
            {
                if(m1[i]==0)
                {
                    cout << p1[i].first << " " << p1[i].second << " ";
                }
            }
            cout << nl;
            return 0;
        }
        else
        {
            cout << -1 << nl;
            return 0;
        }
    }
    cnt1=0, cnt2=0;
    for(i=0;i<p2.size();i++)
    {
        if(v1[0].first==p2[i].first && v1[0].second==p2[i].second)
        {
            cnt1++;
            m2[i] = 1;
        }
    }
    if(cnt1==1)
    {
        for(i=0;i<p2.size();i++)
        {
            if(v1[1].first==p2[i].first && v1[1].second==p2[i].second)
            {
                cnt2++;
                m2[i] = 1;
            }
        }
        if(cnt1==1 && cnt2==1)
        {
            for(i=0;i<p2.size();i++)
            {
                if(m2[i]==0)
                {
                    cout << p2[i].first << " " << p2[i].second << " ";
                }
            }
            cout << nl;
            return 0;
        }
        else
        {
            cout << -1 << nl;
            return 0;
        }
    }
    cnt1=0, cnt2=0;
    for(i=0;i<p3.size();i++)
    {
        if(v1[0].first==p3[i].first && v1[0].second==p3[i].second)
        {
            cnt1++;
            m3[i] = 1;
        }
    }
    if(cnt1==1)
    {
        for(i=0;i<p3.size();i++)
        {
            if(v1[1].first==p3[i].first && v1[1].second==p3[i].second)
            {
                cnt2++;
                m3[i] = 1;
            }
        }
        if(cnt1==1 && cnt2==1)
        {
            for(i=0;i<p3.size();i++)
            {
                if(m3[i]==0)
                {
                    cout << p3[i].first << " " << p3[i].second << " ";
                }
            }
            cout << nl;
            return 0;
        }
        else
        {
            cout << -1 << nl;
            return 0;
        }
    }
    else
    {
        cout << "-1" << nl;
    }
    return 0;
}