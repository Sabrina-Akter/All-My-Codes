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
    ll n;
    cin >> n;
    while(1)
    {
        cout << n << " ";
        if(n==1)
        {
            break;
        }
        else if(n%2==0)
        {
            n = n/2;
        }
        else if(n%2!=0)
        {
            n = (n*3)+1;
        }
    }
    return 0;
}