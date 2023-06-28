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
        ll i, j, MIN=100, c, SIZE, flag, last;
        string s, S="";
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            S.pb(s[i]);
            size_t found = s.find(S);
            set <ll> SET;
            flag = 0;
            if (found != string::npos)
            {
                SET.insert(found);
                last = found+S.size();
            }
            found = s.find(S, found+S.size());
            if (found != string::npos)
            {
                SET.insert(found);
                flag=1;
                last = found;
            }
            if(flag==1)
            {
                for(j=0; j<s.size(); j++)
                {
                    found = s.find(S, found+S.size());
                    if (found != string::npos)
                    {
                        if(found>last)
                        {
                            SET.insert(found);
                            last = found;
                        }
                    }
                }
            }
            c = SET.size();
            SIZE = (S.size())*c;
            if(SIZE==s.size())
            {
                if(S.size()<MIN)
                {
                    MIN = S.size();
                }
            }
        }
        cout << MIN << endl;
        if(t)
        {
            cout << "\n";
        }
    }
    return 0;
}
