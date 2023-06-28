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
    ll n, i;
    cin >> n;
    vll odd, even;
    if(n==1)
    {
        cout << "1" << endl;
    }
    else
    {
    for(i=n;i>=1;i--)
    {
        if(i%2==0)
        {
            even.pb(i);
        }
        else if(i%2!=0)
        {
            odd.pb(i);
        }
    }
    if((even[0]-(odd[odd.size()-1]))==1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for(i=0;i<odd.size();i++)
        {
            cout << odd[i] << " ";
        }
        for(i=0;i<even.size();i++)
        {
            cout << even[i] << " ";
        }
    }
    }
    return 0;
}
