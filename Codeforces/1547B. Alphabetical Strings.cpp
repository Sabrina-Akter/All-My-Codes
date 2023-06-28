#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    string A="abcdefghijklmnopqrstuvwxyz";
    ll t;
    cin >> t;
    while(t--)
    {
        ll n=0, i, l, r, j, flag=0;
        string s;
        cin >> s;
        for(i=1;i<=26;i++)
        {
            if(flag==0)
            {
                for(j=0; j<s.size(); j++)
                {
                    if(s[j]=='a')
                    {
                        n++;
                        l = j, r = j;
                        flag=1;
                        break;
                    }
                }
            }
            if(n==s.size())
            {
                cout << "YES" << endl;
                break;
            }
            if(flag==1)
            {
                if(s[l-1]==A[i])
                {
                    l--;
                    n++;
                }
                else if(s[r+1]==A[i])
                {
                    r++;
                    n++;
                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else if(flag==0)
            {
                cout << "NO" << endl;
                break;
            }
        }
    }
    return 0;
}
