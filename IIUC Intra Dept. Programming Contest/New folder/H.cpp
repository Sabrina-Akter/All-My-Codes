#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

int main()
{
    fastt;
    string s, S="", x;
    set <string> SET, SET2;
    cin >> s;
    ll i, j, k, len, n=s.size();
    for (int len = 1; len <=n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;
            for (int k = i; k <= j; k++)
            {
                S = S+s[k];
            }
            SET.insert(S);
            S="";
        }
    }
    for (auto it = SET.begin(); it !=SET.end(); ++it)
    {
        x=*it;
        if(x.size()==1)
        {
            SET2.insert(x);
        }
        else
        {
            S="";
            ll flag=0;
            for(i=0;i<x.size();i++)
            {
                if(x[i]=='0' && flag==0)
                {
                    continue;
                }
                else if(x[i]!='0' && flag==0)
                {
                    flag=1;
                    S=S+x[i];
                }
                else if(flag==1)
                {
                    S=S+x[i];
                }
            }
            if(S.size()>1)
            {
                SET2.insert(S);
            }
        }
    }
    cout << SET2.size() << endl;
    return 0;
}
