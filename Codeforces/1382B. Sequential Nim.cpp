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
    ll t, n, i, x, next,flag;
    cin >> t;
    while(t--)
    {
        string win;
        next = 1, flag=0;
        cin >> n;
        for(i=1;i<=n;i++)
        {
            cin >> x;
            if(x==1 && next==1 && flag==0)
            {
                next = 2;
                win="First";
            }
            else if(x==1 && next==2 && flag==0)
            {
                next = 1;
                win="Second";
            }
            else if(x>1 && flag==0)
            {
                if(next==1)
                {
                    win="First";
                }
                else if(next==2)
                {
                    win="Second";
                }
                flag=1;
            }
        }
        cout << win << endl;
    }
    return 0;
}
