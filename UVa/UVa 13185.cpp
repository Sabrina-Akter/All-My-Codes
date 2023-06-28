#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    ll t, n, i, sum;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n;
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(n/i==i)
                {
                    sum+=i;
                }
                else if(n/i==n)
                {
                    sum+=i;
                }
                else
                {
                    sum+=i+(n/i);
                }
            }
        }
        if(sum<n)
        {
            cout << "deficient" << endl;
        }
        else if(sum==n)
        {
            cout << "perfect" << endl;
        }
        else
        {
            cout << "abundant" << endl;
        }
    }
    return 0;
}
