#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll p, c, cs=0;
    while(cin >> p >> c)
    {
        if(p==0 && c==0)
        {
            break;
        }
        cs++;
        cout << "Case " << cs << ":" << endl;
        ll i, x=0, n, f, num=0;
        deque <ll> d;
        map <ll, ll> m;
        for(i=0;i<c;i++)
        {
            char ch;
            cin >> ch;
            if(ch=='N')
            {
                if(num>0)
                {
                    cout << d.front() << endl;
                    f = d.front();
                    d.pop_front();
                    d.pb(f);
                    num--;
                }
                else
                {
                    x++;
                    /*while(1)
                    {
                        if(m[x]==0)
                        {
                            break;
                        }
                        else if(m[x]==1)
                        {
                            x++;
                        }
                    }*/
                    if(x>p)
                    {
                        cout << d.front() << endl;
                        f = d.front();
                        d.pop_front();
                        d.pb(f);
                    }
                    else
                    {
                        cout << x << endl;
                        d.pb(x);
                    }
                }
            }
            else if(ch=='E')
            {
                cin >> n;
                m[n]=1;
                for(auto it=d.begin();it!=d.end();it++)
                {
                    if(n==(*it))
                    {
                        d.erase(it);
                        break;
                    }
                }
                d.push_front(n);
                num++;
            }
        }
    }
    return 0;
}
