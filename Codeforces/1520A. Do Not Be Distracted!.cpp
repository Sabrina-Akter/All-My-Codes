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
        ll n, i, flag=0;
        ll A[27]={0};
        cin >> n;
        string s;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            if(i!=0)
            {
                if(s[i]!=s[i-1])
                {
                    if(A[s[i]-64]==1)
                    {
                        flag=1;
                        cout << "NO" << endl;
                        break;
                    }
                }
            }
            A[s[i]-64]=1;
        }
        if(flag==0)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
