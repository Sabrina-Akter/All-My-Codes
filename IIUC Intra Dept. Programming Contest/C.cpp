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
    ll t, n, x, i, sum, m, C, Cs=0;
    cin >> t;
    while(t--)
    {
        Cs++;
        sum=0;
        cin >> n;
        vll v;
        for(i=0;i<n;i++)
        {
            cin >> x;
            v.pb(x);
        }
        if(n==0 || n==1)
        {
            cout << "Case " << Cs << ": " << 1 << endl;
        }
        else
        {
            while(1)
            {
                C = count(v.begin(),v.end(), 0);
                if((v.size()==0) || (C==v.size()))
                {
                    break;
                }
                else if(v.size()==1)
                {
                    sum++;
                    break;
                }
                for(i=1; i<=v.size()-1; i++)
                {
                    if(v[i]==0)
                    {
                        cout << i+1 << " = " << v[i+1] << endl;
                    }
                    else if(v[i]<=v[i+1])
                    {
                        v[i]--;
                        cout << i << " = " << v[i] << endl;
                    }
                    else
                    {
                        v[i] = v[i+1];
                        cout << i << " = " << v[i+1] << endl;
                    }
                }
                v.pop_back();
                reverse(v.begin(), v.end());
                v.pop_back();
                sum++;
                reverse(v.begin(), v.end());
            }
            cout << "Case " << Cs << ": " << sum << endl;
        }
    }
    return 0;
}
