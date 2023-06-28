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
    ll n, x, last=-1, rest=0;
    cin >> n;
    while(n--)
    {
        cin >> x;
        if((last==x && x!=0) || (x==0))
        {
            last=0;
            rest++;
        }
        else if(x==3)
        {
            if(last==1)
            {
                last=2;
            }
            else if(last==2)
            {
                last=1;
            }
        }
        else
        {
            last=x;
        }
    }
    cout << rest << endl;
    return 0;
}
