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
    ll n, i, x, moves=0, last;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        if(i==0)
        {
            last = x;
        }
        else if(i!=0)
        {
            if(x<last)
            {
                moves = (last-x) + moves;
            }
            else
            {
                last = x;
            }
        }
    }
    cout << moves << endl;
    return 0;
}
