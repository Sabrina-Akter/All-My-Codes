#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int t, n, x, y;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n%2020==0 || n%2021==0)
        {
            cout << "YES\n";
        }
        else
        {
            while(1)
            {
                if(n==2020 || n==2021)
                {
                    cout << "YES" << endl;
                    break;
                }
                else if(n<2020)
                {
                    cout << "NO" << endl;
                    break;
                }
                else
                {
                    x = n%10;
                    y = x*2021;
                    n = n-y;
                    if(n%2020==0)
                    {
                        cout << "YES" << endl;
                        break;
                    }
                    else
                    {
                        cout << "NO" << endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
