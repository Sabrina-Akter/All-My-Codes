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
        ll n, k, i, x, dif=0, D, MIN, ANS;
        set <ll> s, ans;
        vll v;
        set <ll>::iterator it;
        map <ll, ll> m;
        cin >> n >> k;
        for(i=0;i<n;i++)
        {
            cin >> x;
            v.pb(x);
            s.insert(x);
            m[x]++;
        }
        for(it=s.begin();it!=s.end();it++)
        {
            if(m[*it]>1)
            {
                if(m[*it]>=k)
                {
                    ans.insert(k);
                }
                else
                {
                    ans.insert(m[*it]);
                }
            }
            else
            {
                dif++;
            }
        }
        if(ans.size()==0 && dif!=0)
        {
            D = dif;
            if(D>=k)
            {
                ANS=k;
            }
            else
            {
                ANS=D;
            }
        }
        else if(ans.size()!=0 && dif==0)
        {
            ANS=*min_element(ans.begin(), ans.end());
        }
        else if(ans.size()!=0 && dif!=0)
        {
            MIN = *min_element(ans.begin(), ans.end());
            ANS=min(dif,MIN);
        }
        cout << "ANS: " << ANS << endl;
        for(i=0;i<v.size();i++)
        {
            if((ANS-m[v[i]])>=0)
            {
                cout << ANS-m[v[i]]+1 << " ";
                m[v[i]]--;
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
