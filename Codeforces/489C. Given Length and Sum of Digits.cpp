
#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
const char nl = '\n';

int main()
{
    fastt;
    ll m,s,sum,l=0;
    string num="0123456789";
    string S, SS;
    cin >> m >> s;
    sum=s;
    if(m==1 && s==0)
    {
        cout << 0 << " " << 0 << nl;
    }
    else if(s>=1 && s<=(m*9))
    {
        while(1)
        {
            if(sum>=9)
            {
                S.pb('9');
                sum=sum-9;
            }
            else
            {
                S.pb(num[sum]);
                sum=0;
            }
            l++;
            if(l==m)
            {
                break;
            }
        }
        if(s<=((m-1)*9))
        {
            l=1;
            sum=s-1;
            while(1)
            {
                if(sum>=9)
                {
                    SS.pb('9');
                    sum=sum-9;
                }
                else
                {
                    SS.pb(num[sum]);
                    sum=0;
                }
                l++;
                if(l==m)
                {
                    break;
                }
            }
            cout << 1;
        }
        else
        {
            SS = S;
        }
        reverse(SS.begin(), SS.end());
        cout << SS << " " << S << nl;
    }
    else
    {
        cout << "-1 -1" << nl;
    }
    return 0;
}
