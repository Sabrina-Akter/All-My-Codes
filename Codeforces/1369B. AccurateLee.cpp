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
        ll n, i, j, flag=0, one=0;
        cin >> n;
        string s, x="", y="";
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                x+='0';
            }
            else if(s[i]=='1')
            {
                one++;
                break;
            }
        }
        j=i+1;
        for(i=s.size()-1;i>=j;i--)
        {
            if(s[i]=='0')
            {
                x+='0';
                flag=1;
                break;
            }
            else if(s[i]=='1')
            {
                one++;
                y+='1';
            }
        }
        if(flag==0 && one>=1)
        {
            x+='1';
        }
        reverse(y.begin(),y.end());
        cout << x+y << endl;
    }
    return 0;
}
