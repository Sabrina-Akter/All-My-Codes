#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long long int t, n, x, odd, even;
    cin >> t;
    while(t--)
    {
        odd = 0;
        even = 0;
        cin >> n;
        while(n--)
        {
            cin >> x;
            if(x%2==0)
            {
                even++;
            }
            else
            {
                odd = 1;
            }
        }
        if(odd!=0)
        {
            cout << even << endl;
        }
        else if(odd==0)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
