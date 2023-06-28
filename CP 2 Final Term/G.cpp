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
    ll t, n, c, dif, flag=0;
    cin >> t;
    while(t--)
    {
        flag=0;
        cin >> n;
        ll A[n+1]={0};
        for(i=0;i<n;i++)
        {
            cin >> A[i];
        }
        cin >> c;
        for(i=1;i<n;i++)
        {
            dif=abs(A[i]-A[i-1]);
            if(dif!=c)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
