#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

ll ways[7500];

int main()
{
    fastt;
    ways[0]=1;
    ll amount, i, j, coins[5] = {1, 5, 10, 25, 50};
    for(i=0;i<5;i++)
    {
        for(j=1;j<7500;j++)
        {
            if(j>=coins[i])
            {
                ways[j]+= ways[j-coins[i]];
            }
        }
    }
    while(cin>>amount)
    {
        cout << ways[amount] << endl;
    }
    return 0;
}
