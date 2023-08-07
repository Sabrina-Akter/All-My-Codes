#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

void p(ll n, ll sum)
{
    ll i;
    if(n==0)
    {
        return;
    }
    for(i=0;i<n-1;i++)
    {
        cout << " ";
    }
    for(i=0;i<sum;i++)
    {
        cout << "*";
    }
    cout << endl;
    return p(n-1, sum+2);
}

int main()
{
    fastt;
    ll n, i, j, sum=1;
    cin >> n;
    p(n, sum);
    /*for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout << " ";
        }
        for(j=0;j<sum;j++)
        {
            cout << "*";
        }
        cout << endl;
        sum = sum + 2;
    }*/
    return 0;
}
