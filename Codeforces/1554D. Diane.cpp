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
        ll n, a, b, i;
        cin >> n;
        if(n<=26)
        {
            string s="abcdefghijklmnopqrstuvwxyz";
            for(i=0;i<n;i++)cout << s[i];
            cout << endl;
        }
        else
        {
            a = n/2;
            b = a-1;
            for(i=1; i<=a; i++)
                cout << "a";
            if(n%2==0)
                cout << "b";
            else
                cout << "bc";
            for(i=1; i<=b; i++)
                cout << "a";
            cout << endl;
        }
    }
    return 0;
}
