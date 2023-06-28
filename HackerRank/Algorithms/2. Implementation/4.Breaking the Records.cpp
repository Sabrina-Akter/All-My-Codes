#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, N, Min, Max, i, mn=0, mx=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> N;
        if(i==0)
        {
            Min = N, Max = N;
        }
        else
        {
            if(N>Max)
            {
                Max=N;
                mx++;
            }
            else if(N<Min)
            {
                Min=N;
                mn++;
            }
        }
    }
    cout << mx << " " << mn << endl;
    return 0;
}
