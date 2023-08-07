#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

void p(ll n, ll sum, ll space)
{
    ll i;
    if(n==0)
    {
        return;
    }
    for(i=0;i<space;i++)
    {
        cout << " ";
    }
    for(i=0;i<sum;i++)
    {
        cout << "*";
    }
    cout << endl;
    return p(n-1, sum-2, space+1);
}

int main()
{
    fastt;
    ll n, i, j, sum, space=0;
    cin >> n;
    sum=n+(n-1);
    p(n, sum, space);
    /*for(i=n-1;i>=0;i--)
    {
        for(j=i;j<n-1;j++)
        {
            cout << " ";
        }
        for(j=0;j<sum;j++)
        {
            cout << "*";
        }
        cout << endl;
        sum = i + (i-1);
    }*/
    return 0;
}
