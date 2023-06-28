#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i;
    for(i=1;i<=1000000;i++)
    {
        if((i%1==0)&&(i%2==0)&&(i%3==0)&&(i%4==0)&&(i%5==0)&&(i%6==0)&&(i%7==0)&&(i%8==0)&&(i%9==0)&&(i%10==0))
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
