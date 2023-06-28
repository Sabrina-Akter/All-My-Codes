#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i, j;
    ll t;
    cin >> t;
    while(t--)
    {
        ll g[100005] = {0};
        ll b[100005] = {0};
        ll m=0, x, y, z;
        string G, B, S;
        cin >> G >> B >> S;
        for(i=0;i<G.size();i++)
        {
            ll n = G[i]-96;
            g[n]=1;
        }
        for(i=0;i<B.size();i++)
        {
            ll n = B[i]-96;
            b[n]=1;
        }
        for(i=1;i<S.size()-1;i++)
        {
            x = S[i-1]-96, y=S[i]-96, z=S[i+1]-96;
            if(b[x]==1 && g[y]==1 && b[z]==1)
            {
                m++;
            }
            else if(g[x]==1 && b[y]==1 && g[z]==1)
            {
                m++;
            }
        }
        cout << m << endl;
    }
    return 0;
}
