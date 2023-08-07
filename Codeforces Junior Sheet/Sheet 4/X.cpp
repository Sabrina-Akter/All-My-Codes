#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

int main()
{
    fastt;
    vector <string> v;
    string s, x, y, z;
    cin >> s;
    v.pb(s);
    ll a=0, i;
    if(s.size()==1 || s.size()==2)
    {
        cout << s << endl;
    }
    else
    {
        while(1)
        {
            a++;
            if(a==s.size())
            {
                break;
            }
            x = s.substr(0,a);
            sort(x.begin(), x.end());
            y = s.substr(a,s.size()-1);
            sort(y.begin(), y.end());
            z = x+y;
            v.pb(z);
        }
        sort(v.begin(), v.end());
        cout << v[0] << endl;
    }
    return 0;
}
