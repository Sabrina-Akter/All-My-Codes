#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
//#define N 100000

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll A[200005]={0};
        set <ll> s, same;
        set <ll>::iterator it;
        ll n, i, x, dif=0;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            A[x]++;
            s.insert(x);
            if(A[x]>1)
            {
                same.insert(A[x]);
            }
        }
        dif=s.size();
        if(same.size()==0)
        {
            if(dif>=2)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            x=*max_element(same.begin(),same.end());
            if(x==dif)
            {
                cout << dif-1 << endl;
            }
            else
            {
                cout << min(dif,x) << endl;
            }
        }
    }
    return 0;
}
