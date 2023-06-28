#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(i,x,y) for(ll i=x;i<=y;i++)
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, first, last, flag=0, count=0, N;
    cin >> n;
    ll A[n+1]={0};
    for(i=1;i<=n;i++)
    {
        cin >> A[i];
    }
    for(i=1;i<=n;i++)
    {
        first = A[i];
        last = i;
        while(1)
        {
            count++;
            N = A[last];
            last = A[N];
            if(count==2 && first==last)
            {
                flag = 1;
                cout << "YES" << endl;
                break;
            }
            if(count>2)
            {
                break;
            }
        }
    }
    if(flag==0)
    {
        cout << "NO" << endl;
    }
    return 0;
}
