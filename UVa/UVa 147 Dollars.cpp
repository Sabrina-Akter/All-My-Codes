#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

ll ways[40000];

int main()
{
    fastt;
    ways[0]=1;
    double x;
    ll amount, i, j, coins[11] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5};
    for(i=0;i<11;i++)
    {
        for(j=1;j<40000;j++)
        {
            if(j>=coins[i])
            {
                ways[j]= ways[j] + ways[j-coins[i]];
            }
        }
    }
    while(cin>>x)
    {
        if(x==0)
        {
            break;
        }
        double X = (float)(x*100);
        amount = (long)X;
        cout << fixed << setprecision(2) << right << setw(6) << x << right << setw(17) << ways[amount] << endl;
    }
    return 0;
}
