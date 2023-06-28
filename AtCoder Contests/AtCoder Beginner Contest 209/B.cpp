#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, x, a, sum=0, i;
    cin >> n >> x;
    for(i=1;i<=n;i++)
    {
        cin >> a;
        if(i%2==0)
        {
            a--;
        }
        sum+=a;
    }
    if(sum<=x)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
