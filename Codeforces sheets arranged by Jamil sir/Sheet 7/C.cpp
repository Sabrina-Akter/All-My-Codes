#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

void Print(ll n)
{
    if(n==0)
    {
        return;
    }
    if(n==1)
    {
        cout << n;
    }
    else
    {
        cout << n << " ";
        return Print(n-1);
    }
}

int main()
{
    fastt;
    ll n;
    cin >> n;
    Print(n);
    return 0;
}