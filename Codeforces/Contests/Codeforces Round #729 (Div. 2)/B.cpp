#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, a, b, i, p, B;
        cin >> n >> a >> b;
        if((n==1)||(n%b==1)||(b==1))
        {
            cout << "Yes" << endl;
        }
        else if(a==1)
        {
            if(n%b==1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            for(i=0;i<=1000000;i++)
            {
                p = pow(a,i);
                if(p>n)
                {
                    cout << "No" << endl;
                    break;
                }
                else
                {
                    B = n-p;
                    if(B%b==0)
                    {
                        cout << "Yes" << endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
