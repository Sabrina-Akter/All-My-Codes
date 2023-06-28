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
        ll n, i, j, flag=0;
        ll A[27]={0};
        cin >> n;
        string s;
        for(i=0;i<n;i++)
        {
            cin >> s;
            for(j=0;j<s.size();j++)
            {
                A[s[j]-96]++;
            }
        }
        for(i=1;i<=26;i++)
        {
            if(A[i]%n!=0)
            {
                flag=1;
                cout << "NO" << endl;
                break;
            }
        }
        if(flag==0)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
