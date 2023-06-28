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
        ll i, A[27]={0}, R=0, G=0;
        string s;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            A[s[i]-96]++;
        }
        for(i=1;i<=26;i++)
        {
            if(A[i]>=2)
            {
                R++;
                G++;
            }
            else if(A[i]==1)
            {
                if(R>=G)
                {
                    G++;
                }
                else
                {
                    R++;
                }
            }
        }
        cout << min(R, G) << endl;
    }
    return 0;
}
