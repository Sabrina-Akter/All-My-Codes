#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    ll n, i, sum;
    cout << "PERFECTION OUTPUT" << endl;
    while(cin >> n)
    {
        if(n==1)
        {
            cout << right << setw(5) << n;
            cout << "  DEFICIENT" << endl;
        }
        else if(n==0)
        {
            cout << "END OF OUTPUT" << endl;
            break;
        }
        else
        {
            sum = 0;
            for(i=1; i<=sqrt(n); i++)
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
            cout << right << setw(5) << n;
            if(sum<n)
            {
                cout << "  DEFICIENT" << endl;
            }
            else if(sum==n)
            {
                cout << "  PERFECT" << endl;
            }
            else
            {
                cout << "  ABUNDANT" << endl;
            }
        }
    }
    return 0;
}
