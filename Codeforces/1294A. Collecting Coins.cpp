#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t, a, b, c, n, N, NN;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> n;
        N = a+b+c+n;
        if(N%3==0)
        {
            NN = N/3;
            if(a<=NN && b<=NN && c<=NN)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
