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
        ll n, i, pos;
        cin >> n;
        string s;
        char first='.', last;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]!='?')
            {
                first=s[i];
                pos=i;
                break;
            }
        }
        for(i=0;i<s.size();i++)
        {
            if(i==0 && s[i]=='?')
            {
                if(first=='.')
                {
                    cout << "B";
                    last='B';
                }
                else
                {
                    if(pos%2==0)
                    {
                        cout << first;
                        last=first;
                    }
                    else
                    {
                        if(first=='B')
                        {
                            cout << 'R';
                            last='R';
                        }
                        else
                        {
                            cout << 'B';
                            last='B';
                        }
                    }
                }
            }
            else if(s[i]!='?')
            {
                cout << s[i];
                last=s[i];
            }
            else if(s[i]=='?')
            {
                if(last=='R')
                {
                    cout << "B";
                    last='B';
                }
                else if(last=='B')
                {
                    cout << "R";
                    last='R';
                }
            }
        }
        cout << endl;
    }
    return 0;
}
