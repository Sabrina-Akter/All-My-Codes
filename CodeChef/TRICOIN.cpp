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
        ll n, N, num=0;
        cin >> n;
        while(1)
        {
            num++;
            N = ((num)*(num+1))/2;
            if(n==N)
            {
                cout << num << endl;
                break;
            }
            else if(N>n)
            {
                cout << num-1 << endl;
                break;
            }
        }
    }
    return 0;
}
