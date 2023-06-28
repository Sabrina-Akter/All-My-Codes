#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 100000


int main()
{
    fastt;
    ll a, b, sum=0, i, x=0;
    cin >> a >> b;
    if(a>=b)
    {
        for(i=1;i<=a;i++)
        {
            x++;
            if(x<b)
            {
                cout << i << " " << -i << " ";
            }
            else if(x>=b)
            {
                cout << i << " ";
                sum = sum+i;
            }
            if(i==a)
            {
                cout << -sum << endl;
            }
        }
    }
    else if(b>a)
    {
        for(i=1;i<=b;i++)
        {
            x++;
            if(x<a)
            {
                cout << -i << " " << i << " ";
            }
            else if(x>=a)
            {
                cout << -i << " ";
                sum = sum+i;
            }
            if(i==b)
            {
                cout << sum << endl;
            }
        }
    }
    return 0;
}
