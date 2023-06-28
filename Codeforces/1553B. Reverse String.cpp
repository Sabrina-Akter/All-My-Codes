#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll T;
    cin >> T;
    while(T--)
    {
        ll i, j, k, R, L, flag=0;
        string s, t, x="", y="";
        cin >> s >> t;
        if(s.size()==1)
        {
            if(s==t)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            for(i=0;i<s.size();i++)
            {
                x = "";
                for(j=i;j<s.size();j++)
                {
                    x.pb(s[j]);
                    y = x;
                    if(t==y)
                    {
                        cout << "YES" << endl;
                        flag=1;
                        break;
                    }
                    for(k=j-1;k>=0;k--)
                    {
                        y.pb(s[k]);
                        if(t==y)
                        {
                            cout << "YES" << endl;
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1)
                    {
                        break;
                    }
                }
                if(flag==1)
                {
                    break;
                }
            }
            if(flag==0)
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
