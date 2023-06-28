#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll i, a, b, L, l, emp=0, flag=0, mid=-1, x, y;
        vector <pair<ll, ll> > v;
        cin >> a >> b;
        string s;
        cin >> s;
        L = s.size();
        l = L;
        if(a%2!=0 && b%2!=0)
        {
            cout << "-1" << endl;
        }
        else
        {
            if(L%2==0)
            {
                l--;
            }
            for(i=0;i<=(l/2);i++)
            {
                L--;
                if(s[i]=='?' && s[L]=='?')
                {
                    if(i==L)
                    {
                        emp++;
                        mid = i;
                    }
                    else
                    {
                        v.pb({i, L});
                        emp+=2;
                    }
                }
                else if(s[i]=='?')
                {
                    if(s[L]=='0')
                    {
                        a-=2;
                        s[i] = '0';
                    }
                    else if(s[L]=='1')
                    {
                        b-=2;
                        s[i] = '1';
                    }
                }
                else if(s[L]=='?')
                {
                    if(s[i]=='0')
                    {
                        a-=2;
                        s[L] = '0';
                    }
                    else if(s[i]=='1')
                    {
                        b-=2;
                        s[L] = '1';
                    }
                }
                else
                {
                    if(s[i]=='0' && s[L]=='0')
                    {
                        if(i==L)
                        {
                            a--;
                        }
                        else
                        {
                            a-=2;
                        }
                    }
                    else if(s[i]=='1' && s[L]=='1')
                    {
                        if(i==L)
                        {
                            b--;
                        }
                        else
                        {
                            b-=2;
                        }
                    }
                    else
                    {
                        cout << "-1" << endl;
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0)
            {
                if(mid!=-1)
                {
                    if(a%2!=0)
                    {
                        s[mid] = '0';
                        a--;
                    }
                    else if(b%2!=0)
                    {
                        s[mid] = '1';
                        b--;
                    }
                    emp--;
                }
                for(i=0;i<v.size();i++)
                {
                    x = v[i].first, y = v[i].second;
                    if(a>0)
                    {
                        s[x] = '0', s[y] = '0';
                        a-=2;
                        emp-=2;
                    }
                    else if(b>0)
                    {
                        s[x] = '1', s[y] = '1';
                        b-=2;
                        emp-=2;
                    }
                }
                if(emp==0 && a==0 && b==0)
                {
                    cout << s << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
        }
    }
    return 0;
}
