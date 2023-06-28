#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i, j, f=0;
    string s;
    cin >> s;
    if(s.size()>=4)
    {
        for(i=0; i<s.size()-3; i++)
        {
            if(s[i]=='A' && s[i+1]=='B')
            {
                for(j=i+2; j<s.size()-1; j++)
                {
                    if(s[j]=='B' && s[j+1]=='A')
                    {
                        f=1;
                        break;
                    }
                }
            }
        }
        if(f==0)
        {
            for(i=0; i<s.size()-3; i++)
            {
                if(s[i]=='B' && s[i+1]=='A')
                {
                    for(j=i+2; j<s.size()-1; j++)
                    {
                        if(s[j]=='A' && s[j+1]=='B')
                        {
                            f=1;
                            break;
                        }
                    }
                }
            }
        }
    }
    if(f==0)
    {
        cout << "NO" << endl;
    }
    else if(f==1)
    {
        cout << "YES" << endl;
    }
    return 0;
}
