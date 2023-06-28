#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t, i, sum=0, num=0;
    ll A[100]={0};
    for(i=1;i<=143;i=i+2)
    {
        sum+=i;
        num++;
        A[num] = sum;
    }

    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        for(i=1;i<=75;i++)
        {
            if(A[i]>=n)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
