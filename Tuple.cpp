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
    ll i = 0;
    tuple <int, double, char, string, char> T;
    T = make_tuple(1, 1.11, 'a', "bababab", 'a');
    for(i=0;i<5;i++)
    {
        const ll j = 0;
        cout << get<j>(T);
    }
    return 0;
}

