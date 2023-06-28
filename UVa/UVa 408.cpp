#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
//#define N 100000

int main()
{
    ll a, b, c;
    while(cin>>a>>b)
    {
        c = __gcd(a, b);
        printf("%10d%10d", a, b);
        if (c == 1)
        {
            printf("    Good Choice\n\n");
        }
        else
        {
            printf("    Bad Choice\n\n");
        }
    }
    return 0;
}
