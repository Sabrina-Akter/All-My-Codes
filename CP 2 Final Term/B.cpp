#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i, j;
    ll t, n, N;
    cin >> t;
    while(t--)
    {
        cin >> n;
        N = ((n+1)/2)-1;
        for(i=0;i<n;i++)
        {
            if(i==0||i==n-1||i==N)
            {
                for(j=0;j<n;j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            else if(i<N)
            {
                cout << "*" << endl;
            }
            else if(i>N)
            {
                for(j=0;j<n;j++)
                {
                    if(j==n-1)
                    {
                        cout << "*" << endl;
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
        }
    }
    return 0;
}
