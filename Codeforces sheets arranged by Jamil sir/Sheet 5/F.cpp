#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

long long func(long long x, long long n)
{
    long long pow=x, i, sum=0;
    for(i=2;i<=n;i++)
    {
        pow=pow*x;
        if((i%2==0) && (i<=n))
        {
            sum=sum+pow;
        }
    }
    return sum;
}


int main()
{
    fastt;
    long long x, n, i, pow, sum=0;
    cin >> x >> n;
    cout << func(x, n) << endl;
    return 0;
}
